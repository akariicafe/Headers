@class UNSNotificationAuthorizationAlertController, NSString, UNSCriticalAlertAuthorizationAlertController, NSObject, NSMutableArray, UNSSettingsGateway;
@protocol OS_dispatch_queue;

@interface UNSNotificationSettingsService : NSObject <UNSSettingsGatewayObserver, UNSNotificationRepositorySettingsProvider> {
    NSMutableArray *_observers;
    UNSSettingsGateway *_settingsGateway;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)resetScheduledDeliverySetting;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)setNotificationSystemSettings:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)a0;
- (id)notificationSettingsForBundleIdentifier:(id)a0;
- (void)_queue_removeObserver:(id)a0;
- (id)notificationSourceForBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allNotificationSources;
- (id)notificationSystemSettings;
- (void).cxx_destruct;
- (id)notificationSourcesForBundleIdentifiers:(id)a0;
- (void)settingsGateway:(id)a0 didUpdateGlobalSettings:(id)a1;
- (id)initWithSettingsGateway:(id)a0;
- (void)settingsGateway:(id)a0 didUpdateSectionInfoForSectionIDs:(id)a1;
- (void)dealloc;

@end
