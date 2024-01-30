@class PLPhotoEditRenderer, PHImageRequestOptions, NSString;

@interface _PXPhotoKitAdjustedUIImageRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PLPhotoEditRenderer *_renderer;
    BOOL _hasReturnedAdjustedResult;
    int _currentVersionRequestID;
    NSString *_uniqueContentIdentifier;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) PHImageRequestOptions *options;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

+ (id)memoryCache;

- (void)cancel;
- (void).cxx_destruct;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (id)memoryCachedImage;
- (id)initWithRenderQueue:(id)a0 asset:(id)a1 contentMode:(long long)a2 imageManager:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (void)cacheImageInMemory:(id)a0;
- (id)_cachedImageURL;
- (id)_unscaledCachedImageURL;
- (id)_existingCachedImageURL;
- (id)memoryCacheKey;
- (BOOL)_deliverCachedImageIfPossible;
- (BOOL)_deliverCachedUnscaledImageIfPossible;
- (void)_handleCurrentVersionImageResult:(id)a0 info:(id)a1;
- (void)_handleImageWasCached;
- (void)_handleRenderedImage:(id)a0 error:(id)a1;
- (void)_handleRenderingFinishedWithData:(id)a0 destinationURL:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2;
- (void)start;

@end
