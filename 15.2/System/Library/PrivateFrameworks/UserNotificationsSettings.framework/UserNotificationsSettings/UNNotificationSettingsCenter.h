@class NSString;
@protocol UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>

@property (weak, nonatomic) id<UNNotificationSettingsCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentNotificationSettingsCenter;

- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)resetScheduledDeliverySetting;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)setNotificationSystemSettings:(id)a0;
- (id)notificationSourceWithIdentifier:(id)a0;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSourcesWithIdentifiers:(id)a1;
- (id)allNotificationSources;
- (id)notificationSystemSettings;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)dealloc;

@end
