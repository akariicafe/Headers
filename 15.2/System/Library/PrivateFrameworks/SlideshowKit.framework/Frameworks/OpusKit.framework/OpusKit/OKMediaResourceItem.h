@interface OKMediaResourceItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (id)mediaObject;
- (void)setMediaObject:(id)a0;
- (BOOL)wantsTemporaryDiskCache;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (id)initWithFilename:(id)a0 andExtension:(id)a1;

@end
