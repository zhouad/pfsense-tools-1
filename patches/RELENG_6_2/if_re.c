Index: if_re.c
===================================================================
--- if_re.c
+++ if_re.c
@@ -168,6 +168,8 @@
 static struct rl_type re_devs[] = {
 	{ DLINK_VENDORID, DLINK_DEVICEID_528T, RL_HWREV_8169S,
 		"D-Link DGE-528(T) Gigabit Ethernet Adapter" },
+	{ DLINK_VENDORID, DLINK_DEVICEID_528T, RL_HWREV_8169_8110SB,
+		"D-Link DGE-528(T) Rev.B1 Gigabit Ethernet Adapter" },
 	{ RT_VENDORID, RT_DEVICEID_8139, RL_HWREV_8139CPLUS,
 		"RealTek 8139C+ 10/100BaseTX" },
 	{ RT_VENDORID, RT_DEVICEID_8101E, RL_HWREV_8101E,

