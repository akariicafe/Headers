@class NSString, UIImage, NSURL, NSData, PBUIColorBoxes;

@interface PBUIStaticWallpaperView : PBUIWallpaperView {
    double _overallContrast;
    PBUIColorBoxes *_colorBoxes;
}

@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage;
@property (retain, nonatomic, getter=_displayedImageURL, setter=_setDisplayedImageURL:) NSURL *displayedImageURL;
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage;
@property (copy, nonatomic) NSData *displayedImageHashData;
@property (copy, nonatomic) NSString *displayedImageHashString;
@property (nonatomic) BOOL needsInactiveAppearanceTreatment;
@property (retain, nonatomic) PBUIColorBoxes *colorBoxes;

+ (BOOL)_canCacheImages;
+ (BOOL)allowsParallax;
+ (BOOL)isRunningInPreferencesApp;
+ (BOOL)_allowsRasterization;
+ (BOOL)_canDownscaleSampleImage;

- (id)_computeAverageColor;
- (id)snapshotImage;
- (void)_updateColorBoxesWithKey:(id)a0 image:(id)a1;
- (BOOL)handlesInactiveAppearanceTreatment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (float)_zoomScale;
- (long long)wallpaperType;
- (void)preheatImageData;
- (double)contrast;
- (id)wallpaperImage;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (BOOL)imageRequiresLuminanceTreatment;
- (BOOL)hasContentOutsideVisibleBounds;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 smudgeRadius:(double)a1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_setupWallpaperImageFromConfiguration:(id)a0 options:(unsigned long long)a1;
- (BOOL)workaround_alwaysForceNoTreatment;
- (id)_createColorBoxes;
- (id)snapshotImageURL;
- (void)_setUpStaticImageContentView:(id)a0;
- (void)_displayImage:(id)a0;
- (id)_wallpaperImageForAnalysis;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (id)cacheUniqueIdentifier;
- (void)_generateImageForImage:(id)a0 cacheKey:(id)a1 options:(unsigned long long)a2 downsampleFactor:(double)a3 needsDimmingTreatment:(BOOL)a4 needsInactiveAppearanceTreatment:(BOOL)a5 averageColorProvider:(id /* block */)a6 generationHandler:(id /* block */)a7;
- (double)cropZoomScale;
- (void).cxx_destruct;

@end
