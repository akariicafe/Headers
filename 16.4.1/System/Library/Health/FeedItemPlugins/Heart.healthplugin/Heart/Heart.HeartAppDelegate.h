@interface Heart.HeartAppDelegate : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate, UIApplicationTestingDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_articleIdentifiersByUrl;
}

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
