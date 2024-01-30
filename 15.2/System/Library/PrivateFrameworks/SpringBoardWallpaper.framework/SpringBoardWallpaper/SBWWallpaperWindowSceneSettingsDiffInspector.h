@interface SBWWallpaperWindowSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

- (void)observeWallpaperVariantWithBlock:(id /* block */)a0;
- (void)observeLockscreenWallpaperScaleWithBlock:(id /* block */)a0;
- (void)observeLockscreenStyleTransitionStateWithBlock:(id /* block */)a0;
- (void)observeHomescreenStyleChangesDelayedWithBlock:(id /* block */)a0;
- (void)observeDisallowLockscreenRasterizationWithBlock:(id /* block */)a0;
- (void)observeHomescreenWallpaperHiddenWithBlock:(id /* block */)a0;
- (void)_observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeWallpaperAnimationSuspendedWithBlock:(id /* block */)a0;
- (void)observeLiveWallpaperInteractiveWithBlock:(id /* block */)a0;
- (void)observeLockscreenWallpaperContentsRectWithBlock:(id /* block */)a0;
- (void)observeWallpaperRequiredWithBlock:(id /* block */)a0;
- (void)observeLockscreenWallpaperHiddenWithBlock:(id /* block */)a0;
- (void)observeColorSamplingSuspendedWithBlock:(id /* block */)a0;
- (void)observeCachingIdentifierWithBlock:(id /* block */)a0;
- (void)observeHomescreenStyleTransitionStateWithBlock:(id /* block */)a0;
- (void)observeLockscreenWallpaperAlphaWithBlock:(id /* block */)a0;
- (void)observeDisallowHomescreenRasterizationWithBlock:(id /* block */)a0;
- (void)observeLiveWallpaperTouchActiveWithBlock:(id /* block */)a0;
- (void)observeLockscreenOnlyWallpaperAlphaWithBlock:(id /* block */)a0;
- (void)observeHomescreenWallpaperScaleWithBlock:(id /* block */)a0;
- (void)observeHomescreenWallpaperAlphaWithBlock:(id /* block */)a0;

@end
