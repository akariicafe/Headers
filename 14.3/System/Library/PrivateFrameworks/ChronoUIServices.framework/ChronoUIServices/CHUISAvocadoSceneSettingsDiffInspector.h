@interface CHUISAvocadoSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector

- (void)_observerForKey:(long long)a0 observer:(id /* block */)a1;
- (void)observeWidgetWithBlock:(id /* block */)a0;
- (void)observeMetricsWithBlock:(id /* block */)a0;
- (void)observeWidgetConfigurationIdentifierBlock:(id /* block */)a0;
- (void)observeVisiblySettledWithBlock:(id /* block */)a0;
- (void)observeStyleWithBlock:(id /* block */)a0;
- (void)observePrivateModeWithBlock:(id /* block */)a0;
- (void)observeAnimationDisablementWithBlock:(id /* block */)a0;
- (void)observeVisibleEntryShouldSnapshotWithBlock:(id /* block */)a0;

@end
