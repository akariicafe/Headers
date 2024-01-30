@class NSString, UIImageView, SBWallpaperViewController, SBFWallpaperView;
@protocol SBWallpaperReachabilityCoordinating, _SBFakeBlurObserver;

@interface _SBFakeBlurView : UIView <_SBFakeBlur, SBWallpaperReachabilityObserving> {
    long long _requestedStyle;
    long long _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    UIImageView *_imageView;
    struct CGPoint { double x; double y; } _wallpaperOffset;
}

@property (readonly, nonatomic) long long variant;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, weak, nonatomic) SBWallpaperViewController *wallpaperViewController;
@property (readonly, nonatomic) id<SBWallpaperReachabilityCoordinating> reachabilityCoordinator;
@property (weak, nonatomic) id<_SBFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imageForStyle:(inout long long *)a0 withSource:(id)a1 overrideTraitCollection:(id)a2;
+ (id)_imageForStyle:(inout long long *)a0 withSource:(id)a1;

- (void)handleReachabilityYOffsetDidChange;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)updateImageWithSource:(id)a0;
- (void)didMoveToWindow;
- (void)rotateToInterfaceOrientation:(long long)a0;
- (void)layoutSubviews;
- (id)initWithVariant:(long long)a0 wallpaperViewController:(id)a1 transformOptions:(unsigned long long)a2 reachabilityCoordinator:(id)a3;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void)reconfigureWithSource:(id)a0;
- (long long)effectiveStyle;
- (void)traitCollectionDidChange:(id)a0;
- (void)requestStyle:(long long)a0;

@end
