@class NSString;
@protocol SBWWallpaperLegibilityProviding, _SBWFakeBlurObserver, SBWWallpaperPresenting;

@interface _SBAccessibilityTintView : UIView <_SBWFakeBlur, SBWallpaperObserver> {
    long long _variant;
}

@property (weak, nonatomic) id<_SBWFakeBlurObserver> observer;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, weak, nonatomic) id<SBWWallpaperPresenting> wallpaperPresenter;
@property (readonly, weak, nonatomic) id<SBWWallpaperLegibilityProviding> wallpaperLegibilityProvider;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateBackgroundColor;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)a0;
- (void)didMoveToSuperview;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void).cxx_destruct;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithVariant:(long long)a0 wallpaperViewController:(id)a1;
- (id)initWithVariant:(long long)a0 wallpaperPresenter:(id)a1 wallpaperLegibilityProvider:(id)a2;

@end
