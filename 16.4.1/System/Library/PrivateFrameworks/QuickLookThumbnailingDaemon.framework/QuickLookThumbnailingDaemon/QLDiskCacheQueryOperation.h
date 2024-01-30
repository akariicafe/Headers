@class _QLCacheThread, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLDiskCacheQueryOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSMutableDictionary *thumbnailRequestBatch;
@property long long thumbnailRequestCount;
@property (retain) _QLCacheThread *cacheThread;

- (id)initWithCacheThread:(id)a0;
- (void)main;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)appendThumbnailRequest:(id)a0;

@end
