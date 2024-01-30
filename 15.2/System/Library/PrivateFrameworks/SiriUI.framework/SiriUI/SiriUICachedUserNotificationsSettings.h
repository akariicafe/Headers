@class NSString, NSMapTable, NSMutableDictionary, NSObject, UNNotificationSettingsCenter;
@protocol OS_dispatch_queue;

@interface SiriUICachedUserNotificationsSettings : NSObject <UNNotificationSettingsCenterDelegate> {
    NSMapTable *_appObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appNotificationSettings;
    UNNotificationSettingsCenter *_notificationsSettingsCenter;
    long long _announceCarPlaySetting;
}

@property (readonly, nonatomic) long long announceCarPlaySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_appNotificationSettingsForAppBundleId:(id)a0;
- (BOOL)_currentlyObservingForAppBundleId:(id)a0;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSourceIdentifiers:(id)a1;
- (BOOL)notificationBannersVisibleInCarPlayForAppBundleId:(id)a0;
- (void)_notifyAllObserversThatPreferencesDidChange;
- (void)_updateNotificationSystemSettingsChangeFromSettingsCenter:(id)a0 notifyObservers:(BOOL)a1;
- (void)_updateNotificationSettingsChangeForAppBundleId:(id)a0 fromSettingsCenter:(id)a1 notifyObservers:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_notificationBannersVisibleInCarPlayForAppBundleId:(id)a0 fromSettingsCenter:(id)a1;
- (BOOL)_announceNotificationsEnabledForAppBundleId:(id)a0;
- (void)addObserver:(id)a0 forAppBundleId:(id)a1;
- (id)_appNotificationSettingsForAppBundleId:(id)a0 fromSettingsCenter:(id)a1;
- (BOOL)_notificationBannersVisibleInCarPlayForAppBundleId:(id)a0;
- (void)_addObserver:(id)a0 forAppBundleId:(id)a1;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)_removeObserver:(id)a0 forAppBundleId:(id)a1;
- (void)removeObserver:(id)a0 forAppBundleId:(id)a1;
- (void)_notifyAllObserversWithAppBundleIdThatPreferencesDidChange:(id)a0;
- (BOOL)_announceNotificationsEnabledForAppBundleId:(id)a0 fromSettingsCenter:(id)a1;
- (BOOL)announceNotificationsEnabledForAppBundleId:(id)a0;

@end
