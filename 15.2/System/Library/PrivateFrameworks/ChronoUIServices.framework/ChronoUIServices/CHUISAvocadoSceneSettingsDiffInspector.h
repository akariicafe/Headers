@interface CHUISAvocadoSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

- (void)observeWidgetConfigurationIdentifierBlock:(id /* block */)a0;
- (void)observeWidgetWithBlock:(id /* block */)a0;
- (void)_observerForKey:(long long)a0 observer:(id /* block */)a1;
- (void)observeStyleWithBlock:(id /* block */)a0;
- (void)observeMetricsWithBlock:(id /* block */)a0;
- (void)observeVisibleEntryShouldSnapshotWithBlock:(id /* block */)a0;
- (void)observeCanAppearInSecureEnvironmentWithBlock:(id /* block */)a0;
- (void)observeAnimationDisablementWithBlock:(id /* block */)a0;
- (void)observeVisibilityWithBlock:(id /* block */)a0;

@end
