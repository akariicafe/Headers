@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol>

@property (retain, nonatomic) NSMutableDictionary *observersByBundleIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_invalidatedConnection;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getBadgeNumberForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performBlockOnConnectionQueue:(id /* block */)a0;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)a0;
- (id)init;
- (void)_queue_removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (void)_queue_interruptedConnection;
- (void)replaceContentForRequestWithIdentifier:(id)a0 bundleIdentifier:(id)a1 replacementContent:(id)a2 completionHandler:(id /* block */)a3;
- (void)_queue_didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)setNotificationTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)getNotificationSettingsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)notificationTopicsForBundleIdentifier:(id)a0;
- (void)getNotificationCategoriesForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeSimilarNotificationRequests:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addNotificationRequest:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)deliveredNotificationsForBundleIdentifier:(id)a0;
- (id)notificationCategoriesForBundleIdentifier:(id)a0;
- (void)setNotificationCategories:(id)a0 forBundleIdentifier:(id)a1;
- (id)notificationSettingsForBundleIdentifier:(id)a0;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_invalidate;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setObservingUserNotifications:(BOOL)a0 forBundleIdentifier:(id)a1;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getNotificationTopicsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)pendingNotificationRequestsForBundleIdentifier:(id)a0;
- (void)setNotificationRequests:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_ensureConnection;
- (void)_queue_addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)clearedInfoForBundleIdentifier:(id)a0;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
