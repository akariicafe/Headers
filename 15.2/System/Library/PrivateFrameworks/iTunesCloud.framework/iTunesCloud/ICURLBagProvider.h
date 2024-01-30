@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
}

@property (class, readonly, nonatomic) ICURLBagProvider *sharedBagProvider;

- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_getCacheKeyForRequestContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cacheFilePath;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateCache;
- (void)_loadCache;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)_saveCache;

@end
