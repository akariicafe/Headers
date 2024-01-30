@class NSMutableDictionary, BBDataProviderConnection, UNSNotificationRepository, UNSApplicationLauncher, UNSLocalizationService, NSObject, NSMutableArray, UNSSettingsGateway, UNSNotificationCategoryRepository, NSString, UNSAttachmentsService, NSMutableSet, UNSNotificationTopicRepository, BBObserver, UNSDaemonLauncher;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate> {
    NSMutableDictionary *_bundleIdentifierToDataProvider;
    NSMutableSet *_authorizedBundleIdentifiers;
    NSMutableSet *_supportedBundleIdentifiers;
    NSMutableArray *_observers;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    BBDataProviderConnection *_dataProviderConnection;
    BBObserver *_settingsObserver;
    UNSSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_queue_notificationSettingsForBundleIdentifier:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)observer:(id)a0 removeSection:(id)a1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)a0;
- (void)_queue_createDataProviderWithNotificationSourceDescription:(id)a0 withCompletion:(id /* block */)a1;
- (void)notificationSourcesDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)a0;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)requestAuthorizationStatus:(long long)a0 withOptions:(unsigned long long)a1 forNotificationSourceDescription:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateAuthorizationWithOptions:(unsigned long long)a0 forNotificationSourceDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)addObserver:(id)a0;
- (void)setCriticalAlertAuthorization:(BOOL)a0 forNotificationSourceDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)_queue_setCriticalAlertAuthorization:(BOOL)a0 forNotificationSourceDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)_queue_notificationSourceDidUninstall:(id)a0;
- (id)initWithApplicationLauncher:(id)a0 daemonLauncher:(id)a1 categoryRepository:(id)a2 notificationRepository:(id)a3 attachmentsService:(id)a4 topicRepository:(id)a5 localizationService:(id)a6 settingsGateway:(id)a7;
- (id)notificationSettingsForBundleIdentifier:(id)a0;
- (void)_queue_sectionInfoDidChange:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)a0 options:(unsigned long long)a1 expirationDate:(id)a2 lastUserGrantDate:(id)a3 forNotificationSourceDescription:(id)a4 completionHandler:(id /* block */)a5;
- (id)_queue_sectionInfoForBundleIdentifier:(id)a0;
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)a0;
- (void)_queue_removeObserver:(id)a0;
- (void)_queue_setSectionInfo:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_createNewDefaultDataProviders:(id)a0;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)a0 options:(unsigned long long)a1 forNotificationSourceDescription:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestAuthorizationStatus:(long long)a0 withOptions:(unsigned long long)a1 expirationDate:(id)a2 lastUserGrantDate:(id)a3 forNotificationSourceDescription:(id)a4 completionHandler:(id /* block */)a5;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)_queue_notificationSourcesDidInstall:(id)a0;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)a0;
- (void)_queue_notificationSourceDidInstall:(id)a0;
- (void)requestRemoveAuthorizationforNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;

@end
