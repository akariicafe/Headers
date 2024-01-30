@class PHCachingImageManager, NSArray, PHImageManager, PHAssetResourceQualityClass, PXPhotoKitThumbnailCache, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider {
    NSArray *_thumbnailQualityClasses;
    NSArray *_thumbnailCaches;
    struct CGSize { double width; double height; } _masterThumbnailSize;
    _Atomic long long _lastActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _preheatlock;
    NSMutableArray *_preheatLock_preheatStates;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    unsigned long long _preheatQueue_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGSize { double width; double height; } _lock_lastTargetSize;
    long long _lock_lastQualityClassIndex;
    PHAssetResourceQualityClass *_lock_lastResourceQualityClass;
    PXPhotoKitThumbnailCache *_lock_lastThumbnailCache;
}

@property (readonly, nonatomic) PHImageManager *imageManager;
@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager;

+ (id)mediaProviderWithLibrary:(id)a0;
+ (id)_defaultImageManager;
+ (id)_defaultLoadingStatusManager;

- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)_noteActivity;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (id)_thumbnailDataForAsset:(id)a0 qualityClass:(id)a1 cache:(id)a2 onlyFromCache:(BOOL)a3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a4;
- (void)cancelImageRequest:(long long)a0;
- (void)stopCachingImagesForAllAssets;
- (struct CGSize { double x0; double x1; })masterThumbnailSize;
- (id)initWithImageManager:(id)a0;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)_schedulePreheat;
- (void)preheatThumbnailDataForAssets:(id)a0 origin:(long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2;
- (long long)requestURLForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)init;
- (void)_preheatQueue_update;
- (void)_getQualityClass:(id *)a0 cache:(id *)a1 qualityClassIndex:(long long *)a2 forTargetSize:(struct CGSize { double x0; double x1; })a3;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)_preheatQueue_schedulePreheat;
- (id)_preheatInfoForQualityClassIndex:(long long)a0;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)a0;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (void)_setPreheatInfo:(id)a0 forQualityClassIndex:(long long)a1;
- (long long)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)initWithImageManager:(id)a0 library:(id)a1;
- (void)_preheatQueue_scheduleUpdateAfterDelay;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;

@end
