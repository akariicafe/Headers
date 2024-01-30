@class NSString, OKPresentation, NSURL;

@interface OKMediaItem : NSObject {
    unsigned long long _uniqueURLHash;
}

@property (nonatomic) OKPresentation *presentation;
@property (readonly, copy, nonatomic) NSString *uniqueURLNormalisedString;
@property (readonly, copy, nonatomic) NSURL *uniqueURL;

+ (id)scheme;
+ (BOOL)isRemote;
+ (id)urlForMediaObject:(id)a0;

- (id)avAsset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMediaObject:(id)a0;
- (void)dealloc;
- (id)metadata;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mediaObject;
- (id)resourceURL;
- (void)invalidate;
- (id)uniquePath;
- (id)prepareCaches:(BOOL)a0 colorSpace:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)metadataWithCompletionHandler:(id /* block */)a0 force:(BOOL)a1 cache:(BOOL)a2;
- (id)detectRegionsOfInterestWithCompletionHandler:(id /* block */)a0 force:(BOOL)a1 cache:(BOOL)a2 colorSpace:(id)a3;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3 colorSpace:(id)a4 completionHandler:(id /* block */)a5 force:(BOOL)a6 cache:(BOOL)a7;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateDiskCachedMetadata;
- (void)invalidateDiskCachedThumbnailImages;
- (void)invalidateMemoryCachedMetadata;
- (void)invalidateMemoryCachedThumbnailImages;
- (id)memoryCachedMetadata;
- (id)diskCachedMetadata;
- (void)setMemoryCachedMetadata:(id)a0;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (void)setDiskCachedMetadata:(id)a0;
- (id)operationWithBlock:(id /* block */)a0 completionHandlerWithObject:(id /* block */)a1;
- (id)metadataWithProgress:(id /* block */)a0 error:(id *)a1;
- (id)memoryCachedThumbnailImageForResolution:(unsigned long long)a0;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)a0;
- (void)setMemoryCachedThumbnailImage:(id)a0 forResolution:(unsigned long long)a1;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDiskCachedThumbnailImage:(id)a0 forResolution:(unsigned long long)a1;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsTemporaryDiskCache;
- (BOOL)wantsMemoryCachedMetadata;
- (id)_resourcesDiskCacheManager;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsMemoryCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (id)initWithUniqueURL:(id)a0;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3 colorSpace:(id)a4;
- (id)regionsOfInterestWithColorSpace:(id)a0;
- (BOOL)hasDiskCachedMetadata:(id *)a0;
- (BOOL)hasDiskCachedThumbnailImage:(id *)a0 forResolution:(unsigned long long)a1;

@end
