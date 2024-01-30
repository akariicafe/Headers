@class NSLock, NSMutableDictionary, AVAssetImageGenerator, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PMScrubberImageSource : NSObject {
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_cachedImages;
    NSMutableDictionary *_requestCompletionHandlers;
    NSMutableArray *_pendingTimestampRequests;
    BOOL _requestToProcessPendingThumbnailsQueued;
    BOOL _cancelled;
    NSLock *_cancelledLock;
}

@property (nonatomic) struct CGSize { double width; double height; } maximumThumbnailSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)processPendingThumbnailRequests;
- (void)setupImageGeneratorWithAVAsset:(id)a0;
- (void)enqueueThumbnailRequestForTimestamp:(id)a0 withResultHandler:(id /* block */)a1;
- (void)cancelPendingThubmnailRequests;

@end
