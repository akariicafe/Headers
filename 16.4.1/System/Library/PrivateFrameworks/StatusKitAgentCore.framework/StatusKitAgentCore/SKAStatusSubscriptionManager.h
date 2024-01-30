@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAPushManaging, SKAChannelManaging;

@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>

@property (retain, nonatomic) NSMapTable *activeTransientSubscriptionsByClient;
@property (retain, nonatomic) NSMapTable *activePresenceSubscriptionsByClient;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_tooManySubscriptionsError;

- (BOOL)_activePresenceAssertionsExist;
- (BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)a0;
- (BOOL)_activeTransientAssertionsExist;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0;
- (id)_fetchAllActivePresenceSubscriptions;
- (long long)_maxPresenceSubscriptionCacheCount;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (BOOL)_addPresenceSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_removePresenceSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 pushManager:(id)a2;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (BOOL)_addTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 presenceCount:(long long)a2 databaseContext:(id)a3;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (long long)_hardMaxSubscriptionCount;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (double)_subscriptionTTL;
- (id)_filterSubscriptionIdentifierToPresence:(id)a0;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)a0;
- (id)_filterSubscriptionIdentifierToStatus:(id)a0;
- (BOOL)_removeTransientSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (long long)_maxSubscriptionCacheCount;
- (id)_activePresenceSubscriptionsForClient:(id)a0;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (id)_activeTransientSubscriptionsForClient:(id)a0;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)a0;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)a0;

@end
