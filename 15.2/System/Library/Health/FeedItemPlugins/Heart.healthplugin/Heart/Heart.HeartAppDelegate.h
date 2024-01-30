@interface Heart.HeartAppDelegate : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_articleIdentifiersByUrl;
}

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
