@class PUMediaProvider;

@interface AEWrappedMediaProvider : PXUIMediaProvider

@property (readonly, nonatomic) PUMediaProvider *_internalMediaProvider;

- (id)initWithMediaProvider:(id)a0;
- (void).cxx_destruct;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(long long)a0;

@end
