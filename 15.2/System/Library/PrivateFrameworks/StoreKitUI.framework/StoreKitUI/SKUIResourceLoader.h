@class NSString, SKUIClientContext, NSOperationQueue, NSMutableDictionary, NSMapTable, NSCache;
@protocol SKUIResourceLoaderDelegate;

@interface SKUIResourceLoader : NSObject <NSCacheDelegate> {
    NSMutableDictionary *_operationsByRequestID;
    NSMapTable *_requestsByCacheKey;
    NSCache *_resourcesByRequestID;
    BOOL _inBackground;
    long long _requestCountMap[3];
}

@property (retain, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (weak, nonatomic) id<SKUIResourceLoaderDelegate> delegate;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long resourceCacheLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAllRequests;
- (void)enterBackground;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)removeAllCachedResources;
- (void)cancelRequestWithIdentifier:(unsigned long long)a0;
- (void)enterForeground;
- (void).cxx_destruct;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (id)init;
- (BOOL)isIdleForReason:(long long)a0;
- (long long)_qualityOfService;
- (id)initWithOperationQueue:(id)a0;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (id)cachedResourceForRequestIdentifier:(unsigned long long)a0;
- (id)initWithOperationQueue:(id)a0 clientContext:(id)a1;
- (BOOL)trySetReason:(long long)a0 forRequestWithIdentifier:(unsigned long long)a1;
- (id)requestIdentifierForCacheKey:(id)a0;
- (void)_sendDidLoadAllForReason:(long long)a0;
- (void)_reprioritizeOperations;
- (long long)_queuePriorityForLoadReason:(long long)a0;
- (void)_updateLoadReason:(long long)a0 forOperation:(id)a1;
- (void)_finishLoadForRequest:(id)a0 withResource:(id)a1;
- (void)_sendDidBeginLoadingIfNecessary;
- (void)_sendDidIdleIfNecessary;
- (void)addResource:(id)a0 forRequestIdentifier:(unsigned long long)a1;
- (void)setReason:(long long)a0 forRequestWithIdentifier:(unsigned long long)a1;

@end
