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

+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (id)playButtonPreviewForUIImage:(id)a0 scale:(double)a1 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (struct CGImage { } *)playButtonPreviewForCGImage:(struct CGImage { } *)a0 scale:(double)a1 isFromMe:(BOOL)a2;
+ (Class)__ck_attachmentItemClass;
+ (id)UTITypes;

- (void)export:(id)a0;
- (int)mediaType;
- (struct CGSize { double x0; double x1; })bbSize;
- (void).cxx_destruct;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (BOOL)validatePreviewFormat;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (Class)previewBalloonViewClass;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (id)previewCacheKeyWithOrientation:(char)a0;
- (BOOL)_assetContainsMetadataKey:(id)a0;
- (BOOL)hasNoVideoTrack;
- (void)updateVideoInfo;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (BOOL)canExport;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;

@end
