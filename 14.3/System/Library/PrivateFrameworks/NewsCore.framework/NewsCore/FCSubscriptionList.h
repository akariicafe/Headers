@class NSOrderedSet, NSSet, NSMutableDictionary, FCMTWriterLock, NSDictionary;
@protocol FCTagRanking;

@interface FCSubscriptionList : FCPrivateDataController

@property (copy, nonatomic) NSOrderedSet *orderedSubscribedTagIDs;
@property (copy, nonatomic) NSSet *subscribedTagIDs;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (copy, nonatomic) NSSet *groupableTagIDs;
@property (copy, nonatomic) NSSet *ignoredTagIDs;
@property (retain, nonatomic) NSMutableDictionary *mutableSubscriptionsBySubscriptionID;
@property (retain, nonatomic) FCMTWriterLock *itemsLock;
@property (readonly, copy, nonatomic) NSSet *allSubscribedTagIDs;
@property (retain, nonatomic) id<FCTagRanking> subscribedTagRanker;
@property (readonly, copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID;

+ (id)desiredKeys;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandStoreFileName;
+ (id)subscriptionIDForTagID:(id)a0 type:(unsigned long long)a1;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedSync;

- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 groupID:(id)a3 eventInitiationLevel:(long long)a4;
- (BOOL)hasNotificationsEnabledForTagID:(id)a0;
- (unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)a0;
- (id)subscriptionsForType:(unsigned long long)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)_assignOrderToTagSubscriptions:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)a0;
- (BOOL)hasIgnoredSubscriptionForTagID:(id)a0;
- (id)_subscriptionFromRecord:(id)a0;
- (BOOL)moveSubscriptionForTagID:(id)a0 toIndex:(unsigned long long)a1;
- (void)addSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 originProvider:(id /* block */)a2 groupID:(id)a3 notificationsEnabled:(BOOL)a4 eventInitiationLevelProvider:(id /* block */)a5 completion:(id /* block */)a6;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (id)_reconcileSubscriptions:(id)a0;
- (void)_addRemoteSubscriptions:(id)a0;
- (void)_removeRemoteSubscriptions:(id)a0;
- (void)_modifyRemoteSubscriptions:(id)a0;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 eventInitiationLevel:(long long)a2;
- (BOOL)hasSubscriptionForTagID:(id)a0;
- (id)subscriptionForTagID:(id)a0;
- (id)subscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (id)_newSubscriptionOrder;
- (void)addSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 originProvider:(id /* block */)a2 eventInitiationLevelProvider:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 groupID:(id)a3 notificationsEnabled:(BOOL)a4 eventInitiationLevel:(long long)a5;
- (BOOL)hasAutoFavoriteSubscriptionForTagID:(id)a0;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 eventInitiationLevel:(long long)a3;
- (id)t_reconcileSubscriptions:(id)a0;
- (BOOL)canAddSubscription;
- (BOOL)hasMutedSubscriptionForTagID:(id)a0;
- (id)subscriptionForTagIDOfAnyType:(id)a0;
- (void)loadLocalCachesFromStore;
- (long long)_orderOfHighestRankedTagSubscription;
- (void)_regenerateSortedSubscriptions;
- (void)_localAddSubscriptions:(id)a0 changeSubscriptions:(id)a1 removeSubscriptions:(id)a2 eventInitiationLevel:(long long)a3;
- (void)_removeRemoteSubscription:(id)a0;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (BOOL)setNotificationsEnabled:(BOOL)a0 forTagID:(id)a1;
- (void)handleSyncCompletion;
- (void)removeSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 eventInitiationLevel:(long long)a2;
- (void)removeSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 eventInitiationLevel:(long long)a2 completion:(id /* block */)a3;

@end
