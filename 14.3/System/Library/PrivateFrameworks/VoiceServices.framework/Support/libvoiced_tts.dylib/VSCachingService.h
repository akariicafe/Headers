@class VSShortTermCache, NSObject, VSSpeechCache, NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VSCachingService : NSObject

@property (retain, nonatomic) NSLock *threadLock;
@property (retain, nonatomic) NSMutableArray *inMemoryCaches;
@property (retain, nonatomic) VSSpeechCache *cacheStore;
@property (retain, nonatomic) VSShortTermCache *shortTermCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachingQueue;

+ (id)standardService;

- (void).cxx_destruct;
- (void)fetchCacheForTask:(id)a0;
- (id)popShortTermCacheForHash:(id)a0;
- (void)enqueueShortTermCacheWithHash:(id)a0 audio:(id)a1 timingInfo:(id)a2 completion:(id /* block */)a3;
- (void)enqueueCacheWithHash:(id)a0 streamAudio:(id)a1 timingInfo:(id)a2 completion:(id /* block */)a3;
- (id)inMemoryCacheForHash:(id)a0;
- (id)onDiskCacheForHash:(id)a0;
- (id)shortTermCacheForHash:(id)a0;
- (void)enqueueCacheWithHash:(id)a0 audio:(id)a1 timingInfo:(id)a2 completion:(id /* block */)a3;
- (id)initWithCache:(id)a0 shortTermMemory:(id)a1;
- (void)_enqueueCacheWithHash:(id)a0 audioObject:(id)a1 timingInfo:(id)a2 completion:(id /* block */)a3;
- (id)compressStreamAudio:(id)a0;
- (id)compressAudio:(id)a0;
- (id)_inMemoryCacheForHash:(id)a0;
- (id)_onDiskCacheForHash:(id)a0;

@end
