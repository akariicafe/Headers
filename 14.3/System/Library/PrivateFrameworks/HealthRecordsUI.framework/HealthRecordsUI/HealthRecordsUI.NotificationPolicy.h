@interface HealthRecordsUI.NotificationPolicy : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate>

- (id)init;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
