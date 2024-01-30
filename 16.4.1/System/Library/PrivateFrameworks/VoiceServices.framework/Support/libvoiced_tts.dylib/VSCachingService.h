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
- (void)_enqueueCacheWithHash:(id)a0 audioObject:(id)a1 timingInfo:(id)a2 voiceKey:(id)a3 voiceResourceKey:(id)a4 completion:(id /* block */)a5;
- (id)_inMemoryCacheForHash:(id)a0;
- (id)_onDiskCacheForHash:(id)a0;
- (id)compressAudio:(id)a0;
- (id)compressStreamAudio:(id)a0;
- (void)enqueueCacheWithHash:(id)a0 audio:(id)a1 timingInfo:(id)a2 voiceKey:(id)a3 voiceResourceKey:(id)a4 completion:(id /* block */)a5;
- (void)enqueueCacheWithHash:(id)a0 streamAudio:(id)a1 timingInfo:(id)a2 voiceKey:(id)a3 voiceResourceKey:(id)a4 completion:(id /* block */)a5;
- (void)enqueueShortTermCacheWithHash:(id)a0 audio:(id)a1 timingInfo:(id)a2 voiceKey:(id)a3 voiceResourceKey:(id)a4 completion:(id /* block */)a5;
- (void)fetchCacheForTask:(id)a0;
- (id)inMemoryCacheForHash:(id)a0;
- (id)initWithCache:(id)a0 shortTermMemory:(id)a1;
- (id)onDiskCacheForHash:(id)a0;
- (id)popShortTermCacheForHash:(id)a0;
- (id)shortTermCacheForHash:(id)a0;

@end
