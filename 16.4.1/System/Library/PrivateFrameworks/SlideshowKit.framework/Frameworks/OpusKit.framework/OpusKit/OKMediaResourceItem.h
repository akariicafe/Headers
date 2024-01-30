@interface OKMediaResourceItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (void)setMediaObject:(id)a0;
- (id)mediaObject;
- (id)initWithFilename:(id)a0 andExtension:(id)a1;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsTemporaryDiskCache;

@end
