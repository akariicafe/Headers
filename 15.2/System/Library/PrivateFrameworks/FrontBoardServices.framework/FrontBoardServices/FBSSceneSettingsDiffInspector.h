@interface FBSSceneSettingsDiffInspector : FBSSettingsDiffInspector

- (void)observeLevelWithBlock:(id /* block */)a0;
- (void)observeIsForegroundWithBlock:(id /* block */)a0;
- (void)observeIsBackgroundedWithBlock:(id /* block */)a0;
- (void)observeFrameWithBlock:(id /* block */)a0;
- (void)observeDisplayConfigurationWithBlock:(id /* block */)a0;
- (void)observeInterfaceOrientationWithBlock:(id /* block */)a0;
- (void)observeClassWithBlock:(id /* block */)a0;
- (void)observeOcclusionsWithBlock:(id /* block */)a0;

@end
