@class NSArray, PXLoadingStatusManager, NSObject;
@protocol OS_dispatch_queue;

@interface PXMediaProvider : NSObject {
    NSArray *_availableThumbnailSizes;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *preheatQueue;

@property (readonly, nonatomic) NSArray *availableThumbnailSizes;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } masterThumbnailSize;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;

- (void).cxx_destruct;
- (void)preheatThumbnailDataForAssets:(id)a0 origin:(long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)a0;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)stopCachingImagesForAllAssets;
- (long long)requestURLForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestCGImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; unsigned short x1; unsigned short x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } *)a3;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(long long)a0;

@end
