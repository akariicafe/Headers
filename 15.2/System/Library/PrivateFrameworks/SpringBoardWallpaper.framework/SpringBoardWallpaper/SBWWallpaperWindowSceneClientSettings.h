@class UIColor, _UILegibilitySettings;

@interface SBWWallpaperWindowSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, nonatomic) double homescreenMinimumWallpaperScale;
@property (readonly, nonatomic) double lockscreenMinimumWallpaperScale;
@property (readonly, copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property (readonly, copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (readonly, copy, nonatomic) UIColor *homescreenAverageColor;
@property (readonly, copy, nonatomic) UIColor *lockscreenAverageColor;
@property (readonly, nonatomic) double homescreenContrast;
@property (readonly, nonatomic) double lockscreenContrast;
@property (readonly, nonatomic) double homescreenParallaxFactor;
@property (readonly, nonatomic) double lockscreenParallaxFactor;
@property (readonly, nonatomic) BOOL homescreenParallaxEnabled;
@property (readonly, nonatomic) BOOL lockscreenParallaxEnabled;
@property (readonly, nonatomic) double homescreenZoomFactor;
@property (readonly, nonatomic) double lockscreenZoomFactor;
@property (readonly, nonatomic, getter=isHomescreenContentStatic) BOOL homescreenContentStatic;
@property (readonly, nonatomic, getter=isLockscreenContentStatic) BOOL lockscreenContentStatic;
@property (readonly, nonatomic, getter=isLockscreenContentLiveWallpaper) BOOL lockscreenContentLiveWallpaper;
@property (readonly, nonatomic) long long liveWallpaperPlaybackState;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
