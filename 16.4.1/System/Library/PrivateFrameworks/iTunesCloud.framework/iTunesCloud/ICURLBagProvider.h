@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
    NSMutableDictionary *_bagChangeNotificationReceivedForRequestContext;
}

@property (class, readonly, nonatomic) ICURLBagProvider *sharedBagProvider;

@property (nonatomic) BOOL useAMSBag;
@property (nonatomic) BOOL useRawPayload;

- (void)invalidateCache;
- (id)_amsProcessInfoFromRequestContext:(id)a0;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getBagAndURLMetricsForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_loadCache;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)a0;
- (id)_getCacheKeyForRequestContext:(id)a0;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_cacheFilePath;
- (void)dealloc;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (id)init;
- (void)_saveCache;
- (id)_knownMissingBagValuesDictionary;
- (void).cxx_destruct;
- (void)_handleAMSBagChangedNotification:(id)a0;

@end
