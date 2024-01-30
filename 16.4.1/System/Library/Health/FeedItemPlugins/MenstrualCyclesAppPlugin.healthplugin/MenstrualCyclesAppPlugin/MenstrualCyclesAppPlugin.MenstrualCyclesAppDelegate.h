@interface MenstrualCyclesAppPlugin.MenstrualCyclesAppDelegate : NSObject <WDNotificationPolicy, UIApplicationTestingDelegate> {
    void /* unknown type, empty encoding */ healthStore;
}

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
