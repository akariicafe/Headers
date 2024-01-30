@class PHCachingImageManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotoKitAdjustedUIMediaProvider : PXUIMediaProvider {
    _Atomic int _nextRequestID;
    NSMutableDictionary *_requestsByIdentifier;
    NSMutableDictionary *_unadjustedRequestIdentifiersByIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PHCachingImageManager *_imageManager;
}

@property (nonatomic) BOOL useCachedRenders;
@property (nonatomic) BOOL delayRenders;
@property (nonatomic) BOOL cachesUnadjustedImageForRequestedAssets;

+ (void)clearCachedRenders;

- (id)init;
- (void).cxx_destruct;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)stopCachingImagesForAllAssets;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (long long)requestURLForImage:(id)a0 pairingIdentifier:(id)a1 options:(id)a2 reaultHandler:(id /* block */)a3;
- (long long)requestURLsForLivePhoto:(id)a0 pairingIdentifier:(id)a1 options:(id)a2 reaultHandler:(id /* block */)a3;
- (id)cachedImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)requestURLForVideo:(id)a0 pairingIdentifier:(id)a1 options:(id)a2 reaultHandler:(id /* block */)a3;
- (long long)requestCGImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)_handleRequestCompletedWithID:(long long)a0 info:(id)a1;
- (void)_removeRequestforID:(long long)a0;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)_nextRequestID;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(long long)a0;

@end
