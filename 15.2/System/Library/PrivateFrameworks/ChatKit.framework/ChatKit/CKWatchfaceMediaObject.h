@class LPLinkMetadata;

@interface CKWatchfaceMediaObject : CKMediaObject

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (nonatomic) double cachedWidth;
@property (nonatomic) char cachedOrientation;

+ (id)UTITypes;
+ (BOOL)canGeneratePreviewInMVSHostProcess;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (int)mediaType;
- (BOOL)hasOutOfProcessPreviewGenerator;
- (BOOL)_isCachedFileLocationValid;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (BOOL)generatePreviewOutOfProcess;
- (id)attachmentSummary:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)linkMetadataForWidth:(double)a0 orientation:(char)a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (Class)previewBalloonViewClass;
- (Class)placeholderBalloonViewClass;

@end
