@class NSMutableDictionary, ICMusicSubscriptionStatusCacheKey, NSObject;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionStatusCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    ICMusicSubscriptionStatusCacheKey *_baseCacheKey;
    NSMutableDictionary *_cachedSubscriptionStatusResponses;
}

@property (class, readonly) ICMusicSubscriptionStatusCache *sharedCache;

- (void)setCachedSubscriptionStatusResponse:(id)a0 forRequestContext:(id)a1 completion:(id /* block */)a2;
- (id)_statusChangeUserInfoForUserIdentity:(id)a0 oldStatus:(id)a1 newStatus:(id)a2;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateBaseCacheKey;
- (void)_handleSubscriptionStatusChangedDistributedNotification:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)getCachedSubscriptionStatusResponseForRequestContext:(id)a0 completion:(id /* block */)a1;
- (id)_init;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)_postLocalChangeNotificationWithUserInfo:(id)a0;
- (void)_persistCachePostingGlobalNotification:(BOOL)a0;
- (void)_handlePhoneNumberDidChangeNotification:(id)a0;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)a0;
- (void)_getCacheKeyForRequestContext:(id)a0 completion:(id /* block */)a1;

@end
