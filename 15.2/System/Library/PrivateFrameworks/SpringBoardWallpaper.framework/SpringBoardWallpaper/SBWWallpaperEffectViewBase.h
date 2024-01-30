@class UIColor, NSString, UIImageView, UIImage, UIView;
@protocol SBWWallpaperLegibilityProviding, _SBWFakeBlur, SBWWallpaperPresenting;

@interface SBWWallpaperEffectViewBase : UIView <_SBWFakeBlurObserver, SBWallpaperObserver> {
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIImage *_maskImage;
    BOOL _shouldMaskBlur;
    BOOL _shouldMaskTint;
    BOOL _accessibilityReduceTransparencyEnabled;
}

@property (retain, nonatomic) UIView<_SBWFakeBlur> *blurView;
@property (retain, nonatomic) UIView *grayscaleTintView;
@property (retain, nonatomic) UIView *colorTintView;
@property (retain, nonatomic) UIView<_SBWFakeBlur> *transitionBlurView;
@property (retain, nonatomic) UIView *transitionGrayscaleTintView;
@property (retain, nonatomic) UIView *transitionColorTintView;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) UIView *blurMaskingContainer;
@property (retain, nonatomic) UIView *tintMaskingContainer;
@property (readonly, nonatomic) id<SBWWallpaperPresenting, SBWWallpaperLegibilityProviding> wallpaperPresenter;
@property (nonatomic) double zoomScale;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) BOOL forcesOpaque;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configureViews;
- (void)updateBackgroundImage;
- (void)setBarTintColor:(id)a0;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)a0;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void)setMaskImage:(id)a0 masksBlur:(BOOL)a1 masksTint:(BOOL)a2;
- (void)_setTransitionFraction:(double)a0;
- (void)_accessibilityReduceTransparencyChanged:(id)a0;
- (BOOL)prepareToAnimateToTransitionState:(inout struct { long long x0; long long x1; double x2; } *)a0;
- (BOOL)_isEffectivelyFullscreen;
- (void)_configureFromScratch;
- (void)setTransitionState:(struct { long long x0; long long x1; double x2; })a0;
- (void)fakeBlurView:(id)a0 didChangeStyle:(long long)a1;
- (void)setTranslucent:(BOOL)a0;
- (void)layoutSubviews;
- (void)setBarStyle:(long long)a0;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceUpdateBackgroundImage:(BOOL)a1;
- (id)appearanceStorage;
- (void)setAppearanceStorage:(id)a0;
- (void)_configureViewsForFullscreen:(BOOL)a0;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setWallpaperStyle:(long long)a0;
- (void)_configureForCurrentBlurStyle;
- (void)setStyle:(long long)a0;
- (void)setHidden:(BOOL)a0;
- (void)_setIsContainedInPopover:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)currentTransitionStateIsOpaque;
- (long long)wallpaperStyle;
- (id)initWithCoder:(id)a0;
- (void)_updateWallpaperAverageColor:(id)a0;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void)willMoveToWindow:(id)a0;
- (id)initWithWallpaperPresenter:(id)a0 variant:(long long)a1 transformOptions:(unsigned long long)a2;
- (void)dealloc;
- (BOOL)_needsBlurViewForStyle:(long long)a0;

@end
