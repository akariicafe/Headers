@class NSString, PBUIWallpaperController;

@interface SBWallpaperEffectView : PBUIWallpaperEffectViewBase <SBApplicationSceneBackgroundView>

@property (readonly, nonatomic) PBUIWallpaperController *wallpaperController;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithWallpaperVariant:(long long)a0;
- (id)initWithWallpaperVariant:(long long)a0 transformOptions:(unsigned long long)a1;

@end
