@class NSObject;
@protocol OS_dispatch_queue;

@interface PXFlexMusicImageProvider : PXAudioAssetImageProvider

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue;

- (id)init;
- (void).cxx_destruct;
- (id)createImageLoaderForRequest:(id)a0;
- (id)imageCacheKeyForRequest:(id)a0;
- (id)imageLoaderCoalescingKeyForRequest:(id)a0;
- (id)resultForCompletedImageLoader:(id)a0 request:(id)a1 error:(id *)a2;

@end
