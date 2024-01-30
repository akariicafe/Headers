@class SBWWallpaperViewController, NSString, UIView, SBFWallpaperView;
@protocol SBWallpaperReachabilityCoordinating, _SBWFakeBlurObserver, _SBWFakeBlurImageProviding, _SBWFakeBlurViewRegistering;

@interface _SBWFakeBlurView : UIView <_SBWFakeBlurImageProviding, _SBWFakeBlur, SBWallpaperReachabilityObserving> {
    long long _requestedStyle;
    long long _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    UIView *_providedImageView;
    struct CGPoint { double x; double y; } _wallpaperOffset;
}

@property (readonly, nonatomic) long long variant;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, weak, nonatomic) id<_SBWFakeBlurImageProviding> imageProvider;
@property (readonly, weak, nonatomic) id<_SBWFakeBlurViewRegistering> fakeBlurRegistry;
@property (readonly, weak, nonatomic) SBWWallpaperViewController *wallpaperViewController;
@property (readonly, nonatomic) id<SBWallpaperReachabilityCoordinating> reachabilityCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SBWFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;

+ (id)_imageForStyle:(inout long long *)a0 withSource:(id)a1 overrideTraitCollection:(id)a2;
+ (void)_imageForStyle:(long long)a0 withSource:(id)a1 overrideTraitCollection:(id)a2 result:(id /* block */)a3;
+ (id)_imageForStyle:(inout long long *)a0 withSource:(id)a1;

- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (long long)effectiveStyle;
- (double)parallaxFactorForVariant:(long long)a0;
- (void)layoutSubviews;
- (id)imageForWallpaperStyle:(inout long long *)a0 variant:(long long)a1 traitCollection:(id)a2;
- (id)initWithVariant:(long long)a0 imageProvider:(id)a1 fakeBlurRegistry:(id)a2 wallpaperViewDelegate:(id)a3 transformOptions:(unsigned long long)a4 reachabilityCoordinator:(id)a5;
- (void)updateImageFromProviderForWallpaperMode:(long long)a0;
- (void)reconfigureFromProvider;
- (void)requestStyle:(long long)a0;
- (void)updateImageWithSource:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateImageProviderView:(id)a0 withImage:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (double)zoomFactorForVariant:(long long)a0;
- (BOOL)parallaxEnabledForVariant:(long long)a0;
- (void)rotateToInterfaceOrientation:(long long)a0;
- (void)reconfigureWithSource:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (id)initWithVariant:(long long)a0 wallpaperViewController:(id)a1 transformOptions:(unsigned long long)a2 reachabilityCoordinator:(id)a3;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)newImageProviderView;
- (void)handleReachabilityYOffsetDidChange;

@end
