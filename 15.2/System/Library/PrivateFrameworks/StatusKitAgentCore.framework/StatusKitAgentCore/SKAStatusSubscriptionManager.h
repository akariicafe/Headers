@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAPushManaging, SKAChannelManaging;

@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>

@property (retain, nonatomic) NSMapTable *activeTransientSubscriptionsByClient;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 databaseContext:(id)a2;
- (long long)_maxSubscriptionCacheCount;
- (long long)_hardMaxSubscriptionCount;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_addTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void)allSubscriptionIdentifiersWithActiveSubscriptionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_removeTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)_activeTransientSubscriptionsForClient:(id)a0;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)a0;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 pushManager:(id)a2;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (BOOL)_activeTransientAssertionsExist;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (double)_subscriptionTTL;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)a0;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;

@end
