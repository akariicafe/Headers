@class NSMutableDictionary, NSMapTable, ASKResourceCache, NSOperationQueue;

@interface ASKResourceLoader : NSObject {
    long long _requestCountMap[3];
}

@property (readonly, nonatomic) NSMutableDictionary *pendingOperations;
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey;
@property (readonly, nonatomic) ASKResourceCache *cachedResources;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSOperationQueue *notificationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestQueue;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground;

- (void)updateLoadReason:(long long)a0 forOperation:(id)a1;
- (void)cancelAllRequests;
- (BOOL)setReason:(long long)a0 forRequestWithKey:(id)a1;
- (void)enterForeground;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (void)_commonInit;
- (long long)currentQualityOfService;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (void)removeAllCachedResources;
- (void)dealloc;
- (id)cachedResourcesForCacheKey:(id)a0;
- (void)reprioritizeOperations;
- (void)enterBackground;
- (void)postDidIdleIfIdle;
- (id)requestKeyForCacheKey:(id)a0;
- (id)init;
- (void)postDidLoadAllForReason:(long long)a0;
- (void)cancelRequestForCacheKey:(id)a0;
- (id)description;
- (void)postDidBeginLoadingIfIdle;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (id)initWithParentResourceLoader:(id)a0;
- (void).cxx_destruct;
- (BOOL)isIdleForReason:(long long)a0;

@end
