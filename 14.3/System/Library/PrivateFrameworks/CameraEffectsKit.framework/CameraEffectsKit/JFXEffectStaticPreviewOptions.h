@class JTImage;

@interface JFXEffectStaticPreviewOptions : JFXEffectPreviewOptions

@property (retain, nonatomic) JTImage *renderBackgroundImage;
@property (nonatomic) BOOL dontCacheToDisk;
@property (nonatomic) BOOL dontCache;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } renderTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } renderRange;
@property (nonatomic) BOOL dontUseThumbnailAssetWhenAvailable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderedImageCropRect;
@property (copy, nonatomic) id /* block */ renderPropertiesConfigurationBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initStaticPreviewOptions;

@end
