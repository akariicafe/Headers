@class UIColor, NSString, SBWImageSlotRepository, SBWWallpaperWindowSceneStyleTransitionState, _UILegibilitySettings;

@interface SBWWallpaperWindowScene : UIWindowScene {
    SBWImageSlotRepository *_wallpaperEffectImageSlots;
}

@property (readonly, nonatomic) long long wallpaperVariant;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lockscreenWallpaperContentsRect;
@property (readonly, nonatomic) double lockscreenWallpaperAlpha;
@property (readonly, nonatomic) double homescreenWallpaperAlpha;
@property (readonly, nonatomic) double lockscreenOnlyWallpaperAlpha;
@property (readonly, nonatomic) BOOL disallowHomescreenRasterization;
@property (readonly, nonatomic) BOOL disallowLockscreenRasterization;
@property (readonly, nonatomic) BOOL homescreenWallpaperHidden;
@property (readonly, nonatomic) BOOL lockscreenWallpaperHidden;
@property (readonly, nonatomic) double homescreenWallpaperScale;
@property (readonly, nonatomic) double lockscreenWallpaperScale;
@property (readonly, nonatomic) BOOL colorSamplingSuspended;
@property (readonly, nonatomic) BOOL wallpaperAnimationSuspended;
@property (readonly, nonatomic) BOOL wallpaperRequired;
@property (readonly, nonatomic) BOOL homescreenStyleChangesDelayed;
@property (readonly, copy, nonatomic) NSString *cachingIdentifier;
@property (readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (readonly, nonatomic) BOOL liveWallpaperTouchActive;
@property (readonly, nonatomic) BOOL liveWallpaperInteractive;
@property (nonatomic) double homescreenMinimumWallpaperScale;
@property (nonatomic) double lockscreenMinimumWallpaperScale;
@property (copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property (copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (copy, nonatomic) UIColor *homescreenAverageColor;
@property (copy, nonatomic) UIColor *lockscreenAverageColor;
@property (nonatomic) double homescreenContrast;
@property (nonatomic) double lockscreenContrast;
@property (nonatomic) double homescreenParallaxFactor;
@property (nonatomic) double lockscreenParallaxFactor;
@property (nonatomic) BOOL homescreenParallaxEnabled;
@property (nonatomic) BOOL lockscreenParallaxEnabled;
@property (nonatomic) double homescreenZoomFactor;
@property (nonatomic) double lockscreenZoomFactor;
@property (nonatomic, getter=isHomescreenContentStatic) BOOL homescreenContentStatic;
@property (nonatomic, getter=isLockscreenContentStatic) BOOL lockscreenContentStatic;
@property (nonatomic, getter=isLockscreenContentLiveWallpaper) BOOL lockscreenContentIsLiveWallpaper;
@property (nonatomic) long long liveWallpaperPlaybackState;

- (void).cxx_destruct;
- (id)_wallpaperSceneSettings;
- (id)_wallpaperSceneClientSettings;
- (void)_updateWallpaperSceneClientSettingsWithBlock:(id /* block */)a0;
- (void)noteWallpaperWillChangeForVariant:(long long)a0;
- (void)noteWallpaperDidChangeForVariant:(long long)a0;
- (void)noteWallpaperDidCompleteWallpaperChange;
- (void)_updateWallpaperVariant:(long long)a0 inAnimationSettings:(id)a1 outAnimationSettings:(id)a2;
- (void)_updateLockscreenWallpaperContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLockscreenWallpaperAlpha:(double)a0;
- (void)_updateHomescreenWallpaperAlpha:(double)a0;
- (void)_updateLockscreenOnlyWallpaperAlpha:(double)a0;
- (void)_updateDisallowRasterizationForHomescreen:(BOOL)a0 lockscreen:(BOOL)a1;
- (void)_updateWallpaperHiddenForHomescreen:(BOOL)a0 lockscreen:(BOOL)a1;
- (void)_updateHomescreenWallpaperScale:(double)a0;
- (void)_updateLockscreenWallpaperScale:(double)a0;
- (void)_updateColorSamplingSuspended:(BOOL)a0;
- (void)_updateWallpaperAnimationSuspended:(BOOL)a0;
- (void)_updateWallpaperRequired:(BOOL)a0;
- (void)_updateHomescreenStyleChangesDelayed:(BOOL)a0;
- (void)_updateHomescreenStyleTransitionStateTo:(id)a0 from:(id)a1;
- (void)_updateLockscreenStyleTransitionStateTo:(id)a0 from:(id)a1;
- (void)_updateLiveWallpaperTouchActive:(BOOL)a0;
- (void)_updateLiveWallpaperInteractive:(BOOL)a0;
- (void)_handleImageSlotRequestAction:(id)a0;
- (void)_handleWallpaperEffectImageRequestAction:(id)a0;
- (void)_handlePreheatAction:(id)a0;
- (void)_handleUpdateAndPrewarmAction:(id)a0;
- (void)_handleUpdateLocationsAction:(id)a0;

@end
