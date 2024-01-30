@interface Profiles.ProfilesAppDelegate : NSObject <UIApplicationTestingDelegate, UNUserNotificationCenterDelegate>

- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;

@end
