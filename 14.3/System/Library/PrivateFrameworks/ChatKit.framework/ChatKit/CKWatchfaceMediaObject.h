@class LPLinkMetadata;

@interface CKWatchfaceMediaObject : CKMediaObject

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (nonatomic) double cachedWidth;
@property (nonatomic) char cachedOrientation;

+ (BOOL)isPreviewable;
+ (BOOL)canGeneratePreviewInMVSHostProcess;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (id)UTITypes;

- (int)mediaType;
- (void).cxx_destruct;
- (id)linkMetadataForWidth:(double)a0 orientation:(char)a1;
- (BOOL)generatePreviewOutOfProcess;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (Class)previewBalloonViewClass;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (id)metricsCollectorMediaType;
- (BOOL)hasOutOfProcessPreviewGenerator;
- (BOOL)_isCachedFileLocationValid;
- (id)attachmentSummary:(unsigned long long)a0;

@end
