@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PXSyntheticUIMediaProvider : PXUIMediaProvider

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSCache *imageCache;
@property (readonly, nonatomic) NSCache *urlCache;

- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(long long)a0;
- (void).cxx_destruct;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)init;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (long long)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)_imageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 outInfo:(out id *)a4;

@end
