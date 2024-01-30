@class FCThreadSafeMutableDictionary, NSString, FCTagController, FCSubscriptionList, FCThreadSafeMutableSet, NSHashTable, FCNotificationController;
@protocol FCPurchaseProviderType, FCCoreConfigurationManager;

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving, FCAppActivityObserving> {
    FCSubscriptionList *_subscriptionList;
    FCTagController *_tagController;
    FCThreadSafeMutableDictionary *_subscribedTagsByTagID;
    FCThreadSafeMutableSet *_newlyAddedSubscriptions;
    NSHashTable *_observers;
    FCNotificationController *_notificationController;
    id<FCPurchaseProviderType> _purchaseProvider;
    id<FCCoreConfigurationManager> _configurationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscriptionForTag:(id)a0;
- (BOOL)hasAutoFavoriteSubscriptionForTagID:(id)a0;
- (id)ignoredTagIDs;
- (id)subscriptions;
- (void)addAutoFavoriteSubscriptionForTagIDs:(id)a0 groupableSubscriptionForTagIDs:(id)a1 originProvider:(id /* block */)a2 eventInitiationLevelProvider:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)addIgnoredSubscriptionForTagID:(id)a0 groupID:(id)a1 eventInitiationLevel:(long long)a2;
- (BOOL)addSubscriptionToTag:(id)a0 error:(id *)a1 eventInitiationLevel:(long long)a2;
- (BOOL)canAddSubscriptionWithError:(id *)a0;
- (id)permanentChannelIDs;
- (void)addObserver:(id)a0;
- (BOOL)hasIgnoredSubscriptionForTagID:(id)a0;
- (void)removeObserver:(id)a0;
- (id)autoFavoriteTagIDs;
- (id)appleNewsNotificationChannelIDs;
- (id)tagIDsWithType:(unsigned long long)a0;
- (id)groupableTagIDs;
- (void)prewarmFromCacheWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)removeAllAutoFavoriteSubscriptions:(id /* block */)a0;
- (id)subscriptionForTagID:(id)a0;
- (BOOL)hasSubscriptionToTag:(id)a0;
- (id)subscribedTagIDsWithNotificationsEnabled;
- (BOOL)addSubscriptionToTag:(id)a0 notificationsEnabled:(BOOL)a1 error:(id *)a2 eventInitiationLevel:(long long)a3;
- (id)orderedCachedSubscribedTags;
- (id)initWithSubscriptionList:(id)a0 tagController:(id)a1 notificationController:(id)a2 purchaseProvider:(id)a3 configurationManager:(id)a4 appActivityMonitor:(id)a5;
- (id)cachedSubscribedTags;
- (BOOL)addMutedSubscriptionForTagID:(id)a0 eventInitiationLevel:(long long)a1;
- (id)newlySubscribedTagIDsInDateRange:(id)a0;
- (BOOL)setNotificationsEnabled:(BOOL)a0 forTag:(id)a1 error:(id *)a2;
- (void)refreshSubscriptionTags;
- (void).cxx_destruct;
- (BOOL)hasSubscriptionToTagID:(id)a0;
- (BOOL)moveSubscriptionForTagID:(id)a0 toIndex:(unsigned long long)a1;
- (id)subscribedTagForTagID:(id)a0;
- (BOOL)addSubscriptionToTag:(id)a0 eventInitiationLevel:(long long)a1 options:(long long)a2 error:(id *)a3;
- (id)init;
- (id)subscriptionsWithType:(unsigned long long)a0;
- (BOOL)hasNotificationsEnabledForTag:(id)a0;
- (BOOL)isChannelPermanentForTagID:(id)a0;
- (BOOL)isAppleNewsNotificationForTagID:(id)a0;
- (void)fetchAllTagsWithCallbackQueue:(id)a0 maximumCachedAge:(double)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)subscriptionsWithCompletion:(id /* block */)a0;
- (id)allSubscribedTagIDs;
- (BOOL)addIgnoredSubscriptionForTagID:(id)a0 eventInitiationLevel:(long long)a1;
- (id)subscriptionSurfacingHeadline:(id)a0;
- (void)subscriptionListDidResetToEmpty:(id)a0;
- (void)subscriptionList:(id)a0 didAddSubscriptions:(id)a1 changeSubscriptions:(id)a2 moveSubscriptions:(id)a3 removeSubscriptions:(id)a4 eventInitiationLevel:(long long)a5;
- (void)removeSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 eventInitiationLevel:(long long)a2;
- (id)mutedTagIDs;
- (id)subscribedTagIDs;
- (void)activityObservingApplicationDidEnterBackground;
- (void)fetchSubscribedTagsWithCallbackQueue:(id)a0 preferCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeSubscriptionToTag:(id)a0 eventInitiationLevel:(long long)a1;
- (BOOL)addMutedSubscriptionForTagID:(id)a0 groupID:(id)a1 eventInitiationLevel:(long long)a2;
- (void)_purchaseListDidRemoveTagIDs:(id)a0;
- (BOOL)hasMutedSubscriptionForTagID:(id)a0;
- (void)_purchaseListDidAddTagIDs:(id)a0;
- (BOOL)canAddSubscription;

@end
