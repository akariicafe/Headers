@class SBFColorBoxes, NSString, UIImage, NSURL, NSData;

@interface SBFStaticWallpaperView : SBFWallpaperView {
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
}

@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage;
@property (retain, nonatomic, getter=_displayedImageURL, setter=_setDisplayedImageURL:) NSURL *displayedImageURL;
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage;
@property (copy, nonatomic) NSData *displayedImageHashData;
@property (copy, nonatomic) NSString *displayedImageHashString;
@property (retain, nonatomic) SBFColorBoxes *colorBoxes;

+ (BOOL)_canCacheImages;
+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;

- (id)_computeAverageColor;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 smudgeRadius:(double)a1;
- (void)_setUpStaticImageContentView:(id)a0;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (id)wallpaperImage;
- (id)cacheUniqueIdentifier;
- (BOOL)imageRequiresLuminanceTreatment;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (BOOL)hasContentOutsideVisibleBounds;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (id)snapshotImageURL;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_generateImageForImage:(id)a0 cacheKey:(id)a1 options:(unsigned long long)a2 downsampleFactor:(double)a3 needsDimmingTreatment:(BOOL)a4 averageColorProvider:(id /* block */)a5 generationHandler:(id /* block */)a6;
- (double)cropZoomScale;
- (void)_displayImage:(id)a0;
- (void)_setupWallpaperImageFromConfiguration:(id)a0 options:(unsigned long long)a1;
- (double)contrast;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)_updateColorBoxesWithKey:(id)a0 image:(id)a1;
- (id)snapshotImage;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (void)preheatImageData;
- (id)_createColorBoxes;
- (float)_zoomScale;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (id)_wallpaperImageForAnalysis;
- (void).cxx_destruct;

@end
