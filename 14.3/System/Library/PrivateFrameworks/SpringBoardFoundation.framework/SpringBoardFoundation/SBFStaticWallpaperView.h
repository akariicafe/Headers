@class SBFColorBoxes, NSString, UIImage, NSData;

@interface SBFStaticWallpaperView : SBFWallpaperView {
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
}

@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage;
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage;
@property (copy, nonatomic) NSData *displayedImageHashData;
@property (copy, nonatomic) NSString *displayedImageHashString;
@property (retain, nonatomic) SBFColorBoxes *colorBoxes;

+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;
+ (BOOL)_canCacheImages;
+ (BOOL)_canDownscaleSampleImage;

- (float)_zoomScale;
- (void)_setUpStaticImageContentView:(id)a0;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (void)_setupWallpaperImageFromConfiguration:(id)a0 options:(unsigned long long)a1;
- (id)_createColorBoxes;
- (void)_displayImage:(id)a0;
- (struct CGSize { double x0; double x1; })_imageSize;
- (BOOL)imageRequiresLuminanceTreatment;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (void)preheatImageData;
- (BOOL)hasContentOutsideVisibleBounds;
- (id)snapshotImage;
- (id)cacheUniqueIdentifier;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 smudgeRadius:(double)a1;
- (void).cxx_destruct;
- (long long)wallpaperType;
- (id)wallpaperImage;
- (id)_computeAverageColor;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (double)cropZoomScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (double)contrast;
- (void)_generateImageForImage:(id)a0 cacheKey:(id)a1 options:(unsigned long long)a2 downsampleFactor:(double)a3 needsDimmingTreatment:(BOOL)a4 averageColor:(id)a5 generationHandler:(id /* block */)a6;
- (void)_updateColorBoxesWithKey:(id)a0 image:(id)a1;
- (id)_wallpaperImageForAnalysis;

@end
