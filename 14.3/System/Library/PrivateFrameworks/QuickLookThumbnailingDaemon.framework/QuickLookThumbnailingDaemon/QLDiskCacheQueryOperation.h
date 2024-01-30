@class _QLCacheThread, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLDiskCacheQueryOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSMutableDictionary *thumbnailRequestBatch;
@property long long thumbnailRequestCount;
@property (retain) _QLCacheThread *cacheThread;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (id)initWithCacheThread:(id)a0;
- (BOOL)appendThumbnailRequest:(id)a0;

@end
