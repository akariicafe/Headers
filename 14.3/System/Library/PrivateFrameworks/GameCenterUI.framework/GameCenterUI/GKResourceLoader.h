@class NSMutableDictionary, NSMapTable, NSOperationQueue, GKResourceCache;

@interface GKResourceLoader : NSObject {
    long long _requestCountMap[3];
}

@property (readonly, nonatomic) NSMutableDictionary *pendingOperations;
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey;
@property (readonly, nonatomic) GKResourceCache *cachedResources;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSOperationQueue *notificationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestQueue;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground;

- (id)requestKeyForCacheKey:(id)a0;
- (void)cancelAllRequests;
- (void)_commonInit;
- (BOOL)isIdleForReason:(long long)a0;
- (id)init;
- (void)removeResourcesForCacheKey:(id)a0;
- (void).cxx_destruct;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (void)dealloc;
- (BOOL)setReason:(long long)a0 forRequestWithKey:(id)a1;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (id)cachedResourcesForCacheKey:(id)a0;
- (void)postDidLoadAllForReason:(long long)a0;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (id)description;
- (void)removeAllCachedResources;
- (long long)currentQualityOfService;
- (void)postDidIdleIfIdle;
- (void)updateLoadReason:(long long)a0 forOperation:(id)a1;
- (void)enterBackground;
- (void)enterForeground;
- (void)cancelRequestForCacheKey:(id)a0;
- (void)reprioritizeOperations;
- (id)initWithParentResourceLoader:(id)a0;
- (void)postDidBeginLoadingIfIdle;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;

@end
