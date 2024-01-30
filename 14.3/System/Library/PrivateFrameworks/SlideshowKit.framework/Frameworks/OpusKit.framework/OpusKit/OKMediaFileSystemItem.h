@interface OKMediaFileSystemItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (void)setMediaObject:(id)a0;
- (id)initWithFileURL:(id)a0;
- (id)mediaObject;
- (id)parseDate:(id)a0;
- (id)_primaryURL;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsTemporaryDiskCache;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (id)_secondaryURL;

@end
