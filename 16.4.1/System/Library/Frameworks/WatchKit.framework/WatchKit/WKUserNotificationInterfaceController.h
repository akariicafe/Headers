@interface WKUserNotificationInterfaceController : WKInterfaceController

- (id)init;
- (void)_didReceiveNotification:(id)a0 remoteNotification:(id)a1 localNotification:(id)a2 withCompletion:(id /* block */)a3;
- (void)didReceiveLocalNotification:(id)a0 withCompletion:(id /* block */)a1;
- (void)didReceiveNotification:(id)a0 withCompletion:(id /* block */)a1;
- (void)didReceiveRemoteNotification:(id)a0 withCompletion:(id /* block */)a1;

@end
