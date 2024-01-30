@class NSMutableDictionary, UNSNotificationRepository, NSMapTable, UNSApplicationLauncher, UNSLocalizationService, NSObject, UNSLocationMonitor, UNSNotificationCategoryRepository, _UNNotificationCommunicationContextService, NSString, UNSNotificationSettingsService, UNSAttachmentsService, NSXPCListener, UNSNotificationTopicRepository, UNSRemoteNotificationServer, UNSNotificationAuthorizationService, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSNotificationSchedulingService;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNSApplicationLauncher *_applicationLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationAuthorizationService *_notificationsAuthorizationService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSUserNotificationServerRemoteNotificationConnectionListener *_remoteNotificationConnectionListener;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
    _UNNotificationCommunicationContextService *_communicationContextService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNotificationRequests:(id)a0 forBundleIdentifier:(id)a1;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationTopicsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceContentForRequestWithIdentifier:(id)a0 bundleIdentifier:(id)a1 replacementContent:(id)a2 completionHandler:(id /* block */)a3;
- (void)getNotificationSettingsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeSimilarNotificationRequests:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_queue_delegateConnectionForBundleIdentifier:(id)a0;
- (id)initWithCategoryRepository:(id)a0 notificationSchedulingService:(id)a1 notificationAuthorizationService:(id)a2 notificationSettingsService:(id)a3 notificationRepository:(id)a4 remoteNotificationConnectionListener:(id)a5 remoteNotificationService:(id)a6 applicationLauncher:(id)a7 attachmentsService:(id)a8 locationMonitor:(id)a9 topicRepository:(id)a10 localizationService:(id)a11 communicationContextService:(id)a12;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setBadgeCount:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_removeConnection:(id)a0 forBundleIdentifier:(id)a1;
- (void)_saveNotificationRequest:(id)a0 shouldRepost:(BOOL)a1 deliveredDate:(id)a2 forBundleIdentifier:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)_removeConnectionForAllBundleIdentifiers:(id)a0;
- (void)getNotificationCategoriesForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_serviceResolvedNotificationRequest:(id)a0 forBundleIdentifier:(id)a1 error:(out id *)a2;
- (id)_currentConnection;
- (void)dealloc;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)a0;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_queue_notificationsForNotificationRecords:(id)a0 bundleIdentifier:(id)a1;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setNotificationCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void)getBadgeNumberForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setObservingUserNotifications:(BOOL)a0 forBundleIdentifier:(id)a1;
- (void)addNotificationRequest:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)a0;
- (void)setNotificationTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_queue_notificationRequestsForNotificationRecords:(id)a0 bundleIdentifier:(id)a1;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_addConnection:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)resume;
- (void)_saveNotificationRecord:(id)a0 shouldRepost:(BOOL)a1 forBundleIdentifier:(id)a2 withCompletionHandler:(id /* block */)a3;

@end
