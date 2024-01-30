@class NSString;
@protocol UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>

@property (weak, nonatomic) id<UNNotificationSettingsCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentNotificationSettingsCenter;

- (id)init;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)dealloc;
- (id)_init;
- (id)notificationSystemSettings;
- (id)allNotificationSources;
- (void)setNotificationSystemSettings:(id)a0;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSourcesWithIdentifiers:(id)a1;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSystemSettings:(id)a1;

@end
