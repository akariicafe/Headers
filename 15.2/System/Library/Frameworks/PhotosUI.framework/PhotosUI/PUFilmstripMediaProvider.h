@class NSCache, UIImage, NSMutableDictionary, AVAssetImageGenerator, NSObject, NSMutableArray, AVVideoComposition, AVAsset;
@protocol OS_dispatch_queue;

@interface PUFilmstripMediaProvider : PUMediaProvider {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSMutableDictionary *_ivarQueue_resultsByRequestNumber;
    NSMutableDictionary *_ivarQueue_completionHandlersByRequestNumber;
    NSMutableArray *_ivarQueue_pendingResults;
}

@property (retain, nonatomic, setter=_setImageGenerator:) AVAssetImageGenerator *_imageGenerator;
@property (nonatomic, setter=_setRequestNumber:) long long _requestNumber;
@property (retain, nonatomic, setter=_setImageCache:) NSCache *_imageCache;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) double timeTolerance;
@property (nonatomic) BOOL deliversImagesInOrder;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void)cancelAllRequests;
- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithAVAsset:(id)a0 videoComposition:(id)a1;
- (void)_performIvarRead:(id /* block */)a0;
- (void)_performIvarWrite:(id /* block */)a0;
- (void)_handleSourceTimeLoadedForAsset:(id)a0 time:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 requestNumber:(long long)a4;
- (void)_generateImageForResult:(id)a0;
- (void)_didGenerateImage:(id)a0 error:(id)a1 requestedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 generatorResult:(long long)a4 forResult:(id)a5;
- (void)_deliverPendingResults;
- (void)_deliverResult:(id)a0;
- (void)_deliverPlaceholderImage;

@end
