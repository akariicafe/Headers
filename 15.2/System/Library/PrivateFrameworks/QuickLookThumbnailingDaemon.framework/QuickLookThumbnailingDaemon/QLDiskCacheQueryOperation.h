@class _QLCacheThread, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLDiskCacheQueryOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSMutableDictionary *thumbnailRequestBatch;
@property long long thumbnailRequestCount;
@property (retain) _QLCacheThread *cacheThread;

- (void)main;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithCacheThread:(id)a0;
- (BOOL)appendThumbnailRequest:(id)a0;

@end
