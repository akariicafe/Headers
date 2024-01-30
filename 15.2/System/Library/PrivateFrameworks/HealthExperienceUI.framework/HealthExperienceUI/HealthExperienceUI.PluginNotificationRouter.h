@interface HealthExperienceUI.PluginNotificationRouter : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ pluginProviding;
}

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
