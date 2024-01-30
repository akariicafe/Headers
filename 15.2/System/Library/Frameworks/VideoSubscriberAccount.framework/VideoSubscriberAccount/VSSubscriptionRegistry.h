@class VSSubscriptionPersistentContainer, NSString, VSRemoteNotifier, VSSubscriptionPredicateFactory;

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer;
@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performBlock:(id /* block */)a0;
- (void)_installedAppsDidChange:(id)a0;
- (void)registerSubscription:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_sendRemoteNotification;
- (id)_securityTaskForCurrentConnection;
- (void)removeSubscriptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)a0;
- (long long)_saveChangesToContext:(id)a0 withDate:(id)a1;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)_subscriptionEntity;
- (void).cxx_destruct;
- (id)init;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)a0 withEntity:(id)a1 forFiltering:(BOOL)a2;
- (BOOL)_saveChangesToContext:(id)a0;
- (id)_fetchRequest;
- (void)dealloc;
- (void)registerSubscription:(id)a0;
- (void)removeSubscriptions:(id)a0;

@end
