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

- (void)setNotificationRequests:(id)a0;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)notificationSettingsForTopics;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)removeAllPendingNotificationRequests;
- (void)didChangeSettings:(id)a0;
- (id)notificationTopics;
- (id)notificationSettings;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)deliveredNotifications;
- (id)clearedInfoForDataProviderMigration;
- (void)didOpenApplicationForResponse:(id)a0;
- (void)addNotificationRequest:(id)a0;
- (void)removeAllDeliveredNotifications;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)a0;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)a0;
- (id)notificationCategories;
- (id)pendingNotificationRequests;
- (void)setBadgeCount:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)didReceiveNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)a0;
- (void)setNotificationTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)a0;
- (void)removeSimilarNotificationRequests:(id)a0;
- (void)setWantsNotificationResponsesDelivered;
- (id)initWithBundleIdentifier:(id)a0 queue:(id)a1;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setNotificationCategories:(id)a0;
- (id)badgeNumber;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
