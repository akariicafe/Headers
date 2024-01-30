@class NSString, NSMutableDictionary, NSMapTable, NSObject, UNNotificationSettingsCenter;
@protocol OS_dispatch_queue;

@interface SiriUICachedUserNotificationsSettings : NSObject <UNNotificationSettingsCenterDelegate> {
    NSMapTable *_appObservers;
    NSObject<OS_dispatch_queue> *_queue;
    UNNotificationSettingsCenter *_notificationsSettingsCenter;
}

@property long long cachedAnnounceCarPlaySetting;
@property (retain) NSMutableDictionary *appNotificationSettings;
@property (readonly, nonatomic) long long announceCarPlaySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSourceIdentifiers:(id)a1;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (BOOL)_announceNotificationsEnabledForAppBundleId:(id)a0 fromSettingsCenter:(id)a1;
- (void)_removeObserver:(id)a0 forAppBundleId:(id)a1;
- (void)_addObserver:(id)a0 forAppBundleId:(id)a1;
- (BOOL)_announceNotificationsEnabledForAppBundleId:(id)a0;
- (id)_appNotificationSettingsForAppBundleId:(id)a0;
- (id)_appNotificationSettingsForAppBundleId:(id)a0 fromSettingsCenter:(id)a1;
- (BOOL)_currentlyObservingForAppBundleId:(id)a0;
- (BOOL)_notificationBannersVisibleInCarPlayForAppBundleId:(id)a0;
- (BOOL)_notificationBannersVisibleInCarPlayForAppBundleId:(id)a0 fromSettingsCenter:(id)a1;
- (void)_notifyAllObserversThatPreferencesDidChange;
- (void)_notifyAllObserversWithAppBundleIdThatPreferencesDidChange:(id)a0;
- (void)_updateNotificationSettingsChangeAndNotifyObserversForAppBundleId:(id)a0 ifDifferentFromSettings:(id)a1;
- (void)_updateNotificationSettingsChangeForAppBundleId:(id)a0 fromSettingsCenter:(id)a1 notifyObservers:(BOOL)a2;
- (void)_updateNotificationSystemSettingsChangeFromSettingsCenter:(id)a0 notifyObservers:(BOOL)a1;
- (void)addObserver:(id)a0 forAppBundleId:(id)a1;
- (id)cachedNotificationSettingsForAppBundleId:(id)a0 asyncFetchNewValuesAndUpdateObservers:(BOOL)a1;
- (void)removeObserver:(id)a0 forAppBundleId:(id)a1;
- (BOOL)syncAnnounceNotificationsEnabledForAppBundleId:(id)a0;
- (BOOL)syncNotificationBannersVisibleInCarPlayForAppBundleId:(id)a0;

@end
