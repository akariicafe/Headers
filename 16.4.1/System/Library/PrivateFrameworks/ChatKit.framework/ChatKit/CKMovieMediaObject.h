@class AVURLAsset, UIImage;

@interface CKMovieMediaObject : CKAVMediaObject <IMMoviePreviewGeneratorProtocol>

@property (nonatomic) BOOL hasVideoTrack;
@property (nonatomic) struct CGSize { double width; double height; } pxSize;
@property (nonatomic) BOOL checkedVideoInfo;
@property (retain, nonatomic) AVURLAsset *asset;
@property (nonatomic) BOOL isAutoloopVideo;
@property (nonatomic) BOOL isJellyfishVideo;
@property (nonatomic) BOOL isAutoloopVideoInitialized;
@property (nonatomic) BOOL isJellyfishInitialized;
@property (retain, nonatomic) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (struct CGImage { } *)playButtonPreviewForCGImage:(struct CGImage { } *)a0 scale:(double)a1 isFromMe:(BOOL)a2;
+ (id)playButtonPreviewForUIImage:(id)a0 scale:(double)a1 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (int)mediaType;
- (void).cxx_destruct;
- (BOOL)canExport;
- (id)previewItemTitle;
- (BOOL)hasNoVideoTrack;
- (id)previewCacheKeyWithOrientation:(char)a0;
- (void)updateVideoInfo;
- (BOOL)_assetContainsMetadataKey:(id)a0;
- (BOOL)allowAutoplay;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClass;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })bbSize;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (BOOL)isPhotosCompatible;
- (id)metricsCollectorMediaType;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (BOOL)supportsUnknownSenderPreview;
- (BOOL)validatePreviewFormat;

@end
