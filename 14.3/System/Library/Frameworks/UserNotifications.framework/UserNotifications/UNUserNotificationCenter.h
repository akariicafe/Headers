@class NSString, NSObject;
@protocol OS_dispatch_queue, UNUserNotificationCenterDelegatePrivate, UNUserNotificationCenterDelegate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegatePrivate> privateDelegate;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly, nonatomic) BOOL supportsContentExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsContentExtensions;
+ (id)currentNotificationCenter;

- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addNotificationRequest:(id)a0;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)a0;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)setNotificationRequests:(id)a0;
- (id)init;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)a0;
- (void)didReceiveNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAllPendingNotificationRequests;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)notificationCategories;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)notificationSettings;
- (id)badgeNumber;
- (id)deliveredNotifications;
- (void)setNotificationTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)clearedInfoForDataProviderMigration;
- (id)notificationTopics;
- (void)didChangeSettings:(id)a0;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)a0;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)a0;
- (void)setNotificationCategories:(id)a0;
- (void)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (id)pendingNotificationRequests;
- (void)removeSimilarNotificationRequests:(id)a0;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)didOpenApplicationForResponse:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)notificationSettingsForTopics;
- (id)initWithBundleIdentifier:(id)a0 queue:(id)a1;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeAllDeliveredNotifications;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
