@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
}

@property (class, readonly) ICURLBagProvider *sharedBagProvider;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (void)_loadCache;
- (void)dealloc;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_getCacheKeyForRequestContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_saveCache;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)_cacheFilePath;

@end
