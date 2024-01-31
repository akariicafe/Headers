@interface LockdownModeAccountNotificationPlugin.Plugin : NSObject <ACDAccountNotificationPlugin>

- (id)init;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
