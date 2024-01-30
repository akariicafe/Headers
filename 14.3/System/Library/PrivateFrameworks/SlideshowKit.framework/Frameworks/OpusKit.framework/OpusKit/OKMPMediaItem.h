@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem

@property (retain) MPMediaItem *mediaItem;

+ (id)scheme;
+ (BOOL)isRemote;
+ (id)urlForMediaObject:(id)a0;
+ (id)urlForMPAsset:(id)a0;

- (id)init;
- (void)setMediaObject:(id)a0;
- (void)dealloc;
- (id)mediaObject;
- (id)initWithMPMediaItem:(id)a0;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsDiskCachedMetadata;
- (void)_resolveAssetIfNeeded;

@end
