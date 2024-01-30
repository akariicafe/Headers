@class PXUIMediaProvider;

@interface PUPXMediaProvider : PUMediaProvider

@property (readonly, nonatomic) PXUIMediaProvider *underlyingMediaProvider;

- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(int)a0;
- (int)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)init;
- (int)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (id)initWithUnderlyingMediaProvider:(id)a0;

@end
