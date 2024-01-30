@class NSString;
@protocol PBUIFakeBlurObserver, PBUILegacyWallpaperPresenting, PBUIWallpaperLegibilityProviding;

@interface PBUIAccessibilityTintView : UIView <PBUIFakeBluring, PBUIWallpaperObserver> {
    long long _variant;
}

@property (weak, nonatomic) id<PBUIFakeBlurObserver> observer;
@property (readonly, weak, nonatomic) id<PBUILegacyWallpaperPresenting> wallpaperPresenter;
@property (readonly, weak, nonatomic) id<PBUIWallpaperLegibilityProviding> wallpaperLegibilityProvider;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundColor;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (long long)effectiveStyle;
- (void)didMoveToWindow;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void).cxx_destruct;
- (void)requestStyle:(long long)a0;
- (id)initWithVariant:(long long)a0 wallpaperPresenter:(id)a1 wallpaperLegibilityProvider:(id)a2;
- (id)initWithVariant:(long long)a0 wallpaperViewController:(id)a1;

@end
