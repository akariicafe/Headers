@interface SBSUIInCallSceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector

- (void)observeTransientOverlayHomeIndicatorAutoHiddenWithBlock:(id /* block */)a0;
- (void)observeCallConnectedWithBlock:(id /* block */)a0;
- (void)observePrefersBannersHiddenFromClonedDisplayWithBlock:(id /* block */)a0;
- (void)observePrefersHiddenWhenDismissedWithBlock:(id /* block */)a0;
- (void)observePreferredStatusBarStyleOverridesToSuppressWithBlock:(id /* block */)a0;
- (void)observeExpanseHUDDodgingInsetsWithBlock:(id /* block */)a0;

@end
