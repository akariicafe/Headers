@class PXLoadingStatusManager, NSMutableDictionary, PXImportImageCache;

@interface PXImportMediaProvider : PXMediaProvider

@property (nonatomic) long long nextRequestID;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } gridItemSize;
@property (readonly, nonatomic) unsigned short thumbnailImageFormat;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (retain, nonatomic) NSMutableDictionary *thumbnailRequestsByID;
@property (retain, nonatomic) PXImportImageCache *imageCache;
@property (nonatomic) long long imageRequestsInflight;
@property (nonatomic) long long lastRequestsInflight;
@property (retain, nonatomic) NSMutableDictionary *extensionPlaceholderCachesByRequestSize;
@property (nonatomic) BOOL hasBeenIdle;

- (long long)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(long long)a0;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)a0;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (BOOL)thumbnailExistsForModel:(id)a0 atSize:(unsigned long long)a1;
- (id)_newPlaceholderImageForItemWithExtension:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)_placeholderExtensionForItem:(id)a0;
- (id)_placeholderForItem:(id)a0 size:(unsigned long long)a1;
- (id)cachedImageForModel:(id)a0 atSize:(unsigned long long)a1;
- (double)idleTimeOut;
- (long long)imageOfSize:(unsigned long long)a0 forModel:(id)a1 localCacheOnly:(BOOL)a2 priority:(unsigned char)a3 completion:(id /* block */)a4;
- (id)initWithImageFormat:(unsigned short)a0;
- (void)performIdleProcessingIfNecessary;
- (void)ppt_sendMediaProviderDidProcessAsset:(id)a0;
- (long long)requestCGImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (long long)requestImageForImportItem:(id)a0 ofSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (long long)requestImageForImportItem:(id)a0 ofSize:(unsigned long long)a1 priority:(unsigned char)a2 completion:(id /* block */)a3;
- (void)sendMediaProviderThumbnailingBecameIdle;
- (BOOL)thumbnailExistsForModel:(id)a0;

@end
