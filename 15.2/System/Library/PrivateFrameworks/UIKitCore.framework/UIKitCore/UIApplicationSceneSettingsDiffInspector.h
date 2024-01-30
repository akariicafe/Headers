@interface UIApplicationSceneSettingsDiffInspector : FBSSceneSettingsDiffInspector

- (void)observeIdleModeEnabledWithBlock:(id /* block */)a0;
- (void)observeForcedStatusBarStyleWithBlock:(id /* block */)a0;
- (void)observeDeviceOrientationEventsEnabledWithBlock:(id /* block */)a0;
- (void)observeCanShowAlertsWithBlock:(id /* block */)a0;
- (void)observeDeviceOrientationWithBlock:(id /* block */)a0;
- (void)observeStatusBarStyleOverridesToSuppressWithBlock:(id /* block */)a0;
- (void)observeSafeAreaInsetsPortraitWithBlock:(id /* block */)a0;
- (void)_observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeUserInterfaceStyleWithBlock:(id /* block */)a0;
- (void)observeStatusBarAvoidanceFrameWithBlock:(id /* block */)a0;
- (void)observeInterfaceOrientationModeWithBlock:(id /* block */)a0;
- (void)observeTargetOfEventDeferringEnvironmentsWithBlock:(id /* block */)a0;
- (void)observeStatusBarHeightWithBlock:(id /* block */)a0;
- (void)observeAccessibilityContrastWithBlock:(id /* block */)a0;
- (void)observePersistenceIdentifierWithBlock:(id /* block */)a0;
- (void)observeDeactivationReasonsWithBlock:(id /* block */)a0;
- (void)observeSafeAreaInsetsLandscapeLeftWithBlock:(id /* block */)a0;
- (void)observeStatusBarPartsWithBlock:(id /* block */)a0;
- (void)observeForcedStatusBarForegroundTransparentWithBlock:(id /* block */)a0;
- (void)observeSafeAreaInsetsPortraitUpsideDownWithBlock:(id /* block */)a0;
- (void)observeSafeAreaInsetsLandscapeRightWithBlock:(id /* block */)a0;
- (void)observePointerLockStatusWithBlock:(id /* block */)a0;
- (void)observeUnderLockWithBlock:(id /* block */)a0;

@end
