@class NSString, SBWallpaperViewController;
@protocol _SBFakeBlurObserver;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {
    long long _variant;
}

@property (weak, nonatomic) id<_SBFakeBlurObserver> observer;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, weak, nonatomic) SBWallpaperViewController *wallpaperViewController;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateBackgroundColor;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)a0;
- (id)initWithVariant:(long long)a0 wallpaperViewController:(id)a1;

@end
