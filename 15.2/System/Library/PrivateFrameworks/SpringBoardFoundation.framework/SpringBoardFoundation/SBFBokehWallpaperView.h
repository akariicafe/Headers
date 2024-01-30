@class CAGradientLayer, SBFMotionManager, CADisplayLink, NSDictionary, UIImage, NSMutableArray;

@interface SBFBokehWallpaperView : SBFWallpaperView {
    CADisplayLink *_displayLink;
    SBFMotionManager *_motionManager;
    NSMutableArray *_circleArray;
    NSDictionary *_options;
    long long _circleFillColor;
    UIImage *_cachedSnapshotImage;
    struct __IOSurface { } *_snapshotBuffer;
    BOOL _isOnLockScreen;
    BOOL _contentIsVisible;
    BOOL _hasSingleVariant;
    BOOL _blursNeedInvalidation;
}

@property (readonly, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;
+ (BOOL)_allowsParallax;

- (BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)a0;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (long long)wallpaperType;
- (void)_screenDidUpdate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (id)cacheGroup;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (BOOL)isContentStatic;
- (id)snapshotImage;
- (void)setWallpaperAnimationEnabled:(BOOL)a0;
- (void)_destroyDisplayLink;
- (id)_generateImageFromImage:(id)a0 forBackdropParameters:(struct { long long x0; long long x1; long long x2; double x3; double x4; double x5; double x6; long long x7; })a1 includeTint:(BOOL)a2 traitCollection:(id)a3;
- (struct __IOSurface { } *)_createSnapshotBuffer;
- (BOOL)_lowPowerModeIsEnabled;
- (void)_styleModeChanged:(id)a0;
- (void)_addBokehCircles:(long long)a0;
- (BOOL)_thermalStateIsCritical;
- (long long)userInterfaceStyle;
- (void)_screenDimmed:(id)a0;
- (void)_screenUndimmed:(id)a0;
- (void)_initDisplayLink;
- (void).cxx_destruct;
- (void)_updateGradientAndFillColor;
- (void)invalidate;
- (BOOL)_layerIsOutOfBounds:(id)a0;
- (void)_wallpaperDidChange:(id)a0;
- (void)dealloc;
- (void)_thermalStateDidChange:(id)a0;
- (void)didMoveToWindow;
- (void)_correctGyroValues:(inout double *)a0 y:(inout double *)a1;
- (void)_updateOrientationIfNeeded;
- (void)_toggleCircleAnimations:(BOOL)a0;
- (void)_updateVariantStatus;

@end
