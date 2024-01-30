@class NSOperationQueue, NSCache;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider {
    NSOperationQueue *_queue;
    NSCache *_cache;
}

- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(long long)a0;
- (id)init;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (id)_createImageForKey:(id)a0 error:(id *)a1;
- (void)_handleImageCreated:(id)a0 imageKey:(id)a1;
- (id)_resizeImageAtURL:(id)a0 imageUTI:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 bakeInOrientation:(BOOL)a3 error:(id *)a4;

@end
