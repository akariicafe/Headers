@class NSString;
@protocol PXUIImageProvider;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider>

@property (readonly, nonatomic) id<PXUIImageProvider> underlyingAssetImageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)cancelImageRequest:(long long)a0;
- (void)stopCachingImagesForAllAssets;
- (id)init;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void).cxx_destruct;
- (id)_underlyingAssetsFromPreviewAssets:(id)a0;
- (id)initWithUnderlyingAssetImageProvider:(id)a0;

@end
