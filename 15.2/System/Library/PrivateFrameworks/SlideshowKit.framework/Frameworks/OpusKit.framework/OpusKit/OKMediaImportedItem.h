@interface OKMediaImportedItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (id)mediaObject;
- (void)setMediaObject:(id)a0;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateDiskCachedThumbnailImages;
- (id)diskCachedMetadata;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDiskCachedThumbnailImage:(id)a0 forResolution:(unsigned long long)a1;
- (BOOL)wantsTemporaryDiskCache;
- (BOOL)wantsMemoryCachedMetadata;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)hasDiskCachedMetadata:(id *)a0;
- (BOOL)hasDiskCachedThumbnailImage:(id *)a0 forResolution:(unsigned long long)a1;
- (id)initWithImportedResourceURL:(id)a0;

@end
