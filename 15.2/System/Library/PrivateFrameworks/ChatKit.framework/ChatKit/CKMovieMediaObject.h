@class AVURLAsset, UIImage;

@interface CKMovieMediaObject : CKAVMediaObject

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
+ (id)playButtonPreviewForUIImage:(id)a0 scale:(double)a1 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (struct CGImage { } *)playButtonPreviewForCGImage:(struct CGImage { } *)a0 scale:(double)a1 isFromMe:(BOOL)a2;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (Class)__ck_attachmentItemClass;

- (Class)balloonViewClass;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (struct CGSize { double x0; double x1; })bbSize;
- (BOOL)canExport;
- (int)mediaType;
- (id)previewItemTitle;
- (BOOL)__im_ff_systemImageAdoptionEnabled;
- (id)previewCacheKeyWithOrientation:(char)a0;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (BOOL)_assetContainsMetadataKey:(id)a0;
- (BOOL)allowAutoplay;
- (BOOL)hasNoVideoTrack;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (void)updateVideoInfo;
- (BOOL)supportsUnknownSenderPreview;
- (BOOL)validatePreviewFormat;
- (BOOL)isPhotosCompatible;
- (id)attachmentSummary:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (Class)previewBalloonViewClass;

@end
