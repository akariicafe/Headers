@interface PBUIWallpaperWindowSceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector

- (void)_observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeHomescreenLegibilitySettingsWithBlock:(id /* block */)a0;
- (void)observeLockscreenParallaxFactorWithBlock:(id /* block */)a0;
- (void)observeLiveWallpaperPlaybackStateWithBlock:(id /* block */)a0;
- (void)observeLockscreenAverageColorWithBlock:(id /* block */)a0;
- (void)observeLockscreenParallaxEnabledWithBlock:(id /* block */)a0;
- (void)observeLockscreenContentStaticWithBlock:(id /* block */)a0;
- (void)observeLockscreenContrastWithBlock:(id /* block */)a0;
- (void)observeHomescreenParallaxFactorWithBlock:(id /* block */)a0;
- (void)observeHomescreenMinimumWallpaperScaleWithBlock:(id /* block */)a0;
- (void)observeLockscreenZoomFactorWithBlock:(id /* block */)a0;
- (void)observeHomescreenAverageColorWithBlock:(id /* block */)a0;
- (void)observeHomescreenContrastWithBlock:(id /* block */)a0;
- (void)observeLockscreenLegibilitySettingsWithBlock:(id /* block */)a0;
- (void)observeLockscreenMinimumWallpaperScaleWithBlock:(id /* block */)a0;
- (void)observeHomescreenParallaxEnabledWithBlock:(id /* block */)a0;
- (void)observeLockscreenContentLiveWallpaperWithBlock:(id /* block */)a0;
- (void)observeHomescreenContentStaticWithBlock:(id /* block */)a0;
- (void)observeHomescreenZoomFactorWithBlock:(id /* block */)a0;

@end
