@class NSString;
@protocol WLKNotificationCenterDelegate;

@interface WLKNotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl>

@property (nonatomic) BOOL topicsAreInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WLKNotificationCenterDelegate> delegate;

+ (id)_JSONDictForResponse:(id)a0;

- (unsigned long long)_authOptions;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)_initializeTopics;
- (void).cxx_destruct;
- (id)_displayNameForSubsectionID:(id)a0;
- (void)dealloc;
- (id)_notificationCenter;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)userNotificationCenter:(id)a0 didOpenApplicationForResponse:(id)a1;
- (BOOL)isCategoryEnabledByUser:(long long)a0;
- (void)_networkReachabilityDidChangeNotification:(id)a0;
- (void)post:(id)a0 title:(id)a1 body:(id)a2 options:(id)a3;
- (void)_fetchTopics:(id /* block */)a0;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_storeFrontChangedNotification:(id)a0;
- (void)userNotificationCenter:(id)a0 didChangeSettings:(id)a1;
- (id)_topicIdentifierForCategory:(long long)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
