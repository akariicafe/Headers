@interface SBSUILoginUISceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector

- (void)_observeOtherLoginUISetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeWallpaperModeWithBlock:(id /* block */)a0;
- (void)observeIdleTimerModeWithBlock:(id /* block */)a0;
- (void)observeStatusBarUserNameOverrideWithBlock:(id /* block */)a0;
- (void)observeRotationModeWithBlock:(id /* block */)a0;

@end
