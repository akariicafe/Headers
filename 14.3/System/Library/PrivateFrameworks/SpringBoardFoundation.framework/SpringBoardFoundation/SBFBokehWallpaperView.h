@class CAGradientLayer, SBFMotionManager, CADisplayLink, NSDictionary, UIImage, NSMutableArray;

@interface SBFBokehWallpaperView : SBFWallpaperView {
    CADisplayLink *_displayLink;
    SBFMotionManager *_motionManager;
    NSMutableArray *_circleArray;
    NSDictionary *_options;
    long long _circleFillColor;
    UIImage *_cachedSnapshotImage;
    struct __IOSurface { } *_snapshotBuffer;
    UIImage *_cachedFolderBlurImage;
    BOOL _isOnLockScreen;
    BOOL _contentIsVisible;
    BOOL _hasSingleVariant;
    BOOL _blursNeedInvalidation;
}

@property (readonly, nonatomic) CAGradientLayer *layer;

+ (id)silverGradient;
+ (id)yellowGradient;
+ (Class)layerClass;
+ (id)defaultGradient;
+ (id)greenGradient;
+ (BOOL)_allowsParallax;
+ (id)redGradient;
+ (id)purpleGradient;
+ (id)orangeGradient;
+ (id)blueGradient;
+ (id)defaultGradientSilver;

- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (long long)userInterfaceStyle;
- (id)snapshotImage;
- (void)_initDisplayLink;
- (BOOL)_thermalStateIsCritical;
- (id)_imageForBackdropParameters:(struct { long long x0; long long x1; long long x2; double x3; double x4; double x5; double x6; long long x7; })a0 includeTint:(BOOL)a1 overrideTraitCollection:(id)a2;
- (void)_screenDimmed:(id)a0;
- (void).cxx_destruct;
- (void)setWallpaperAnimationEnabled:(BOOL)a0;
- (void)_wallpaperDidChange:(id)a0;
- (long long)wallpaperType;
- (id)_computeAverageColor;
- (BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)a0;
- (void)_handleVariantChange;
- (id)_imageFromColor:(id)a0;
- (struct __IOSurface { } *)_createSnapshotBuffer;
- (BOOL)_lowPowerModeIsEnabled;
- (void)_correctGyroValues:(inout double *)a0 y:(inout double *)a1;
- (void)_toggleCircleAnimations:(BOOL)a0;
- (id)cacheGroup;
- (BOOL)_layerIsOutOfBounds:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)_updateGradientAndFillColor;
- (void)_addBokehCircles:(long long)a0;
- (void)_screenDidUpdate;
- (void)_updateCircleFillColor;
- (void)_updateOrientationIfNeeded;
- (void)_updateVariantStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })newRectForCircle:(id)a0 potentialX:(double)a1 potentialY:(double)a2;
- (void)_destroyDisplayLink;
- (id)_folderBlurImage;
- (void)invalidate;
- (void)_screenUndimmed:(id)a0;
- (void)_styleModeChanged:(id)a0;
- (void)_thermalStateDidChange:(id)a0;

@end
