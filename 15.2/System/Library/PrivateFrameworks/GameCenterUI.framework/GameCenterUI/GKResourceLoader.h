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

- (void)cancelAllRequests;
- (void)postDidIdleIfIdle;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (void)postDidLoadAllForReason:(long long)a0;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (id)cachedResourcesForCacheKey:(id)a0;
- (void)reprioritizeOperations;
- (id)requestKeyForCacheKey:(id)a0;
- (void)enterBackground;
- (id)description;
- (void)removeAllCachedResources;
- (void)updateLoadReason:(long long)a0 forOperation:(id)a1;
- (void)enterForeground;
- (void).cxx_destruct;
- (long long)currentQualityOfService;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (id)init;
- (BOOL)isIdleForReason:(long long)a0;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (void)_commonInit;
- (id)initWithParentResourceLoader:(id)a0;
- (void)cancelRequestForCacheKey:(id)a0;
- (void)postDidBeginLoadingIfIdle;
- (void)dealloc;
- (BOOL)setReason:(long long)a0 forRequestWithKey:(id)a1;
- (void)removeResourcesForCacheKey:(id)a0;

@end
