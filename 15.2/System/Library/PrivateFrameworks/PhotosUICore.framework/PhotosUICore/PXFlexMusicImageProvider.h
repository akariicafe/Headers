@class NSObject;
@protocol OS_dispatch_queue;

@interface PXFlexMusicImageProvider : PXAudioAssetImageProvider

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue;

- (void).cxx_destruct;
- (id)init;
- (id)imageCacheKeyForRequest:(id)a0;
- (id)imageLoaderCoalescingKeyForRequest:(id)a0;
- (id)createImageLoaderForRequest:(id)a0;
- (id)resultForCompletedImageLoader:(id)a0 request:(id)a1 error:(id *)a2;

@end
