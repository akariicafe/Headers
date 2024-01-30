@class _QLCacheThread, NSObject, QLTGeneratorThumbnailRequest;
@protocol OS_dispatch_queue;

@interface QLMemoryCacheQueryOperation : NSOperation {
    _QLCacheThread *_cacheThread;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) QLTGeneratorThumbnailRequest *generatorRequest;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithThumbnailRequest:(id)a0 cacheThread:(id)a1;

@end
