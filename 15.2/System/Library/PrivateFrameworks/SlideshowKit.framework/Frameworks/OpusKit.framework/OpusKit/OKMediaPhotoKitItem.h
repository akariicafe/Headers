@class PHAsset;

@interface OKMediaPhotoKitItem : OKMediaItem

@property (retain) PHAsset *asset;

+ (BOOL)isRemote;
+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;
+ (id)urlForPHAsset:(id)a0;

- (id)mediaObject;
- (id)init;
- (void)setMediaObject:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_faceAreaRect;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsTemporaryDiskCache;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (void)_resolveAssetIfNeeded;
- (id)initWithPHAsset:(id)a0;

@end
