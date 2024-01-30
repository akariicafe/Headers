@class NSString, SBWallpaperEffectView;

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {
    SBWallpaperEffectView *_backgroundWallpaperEffectView;
}

@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
