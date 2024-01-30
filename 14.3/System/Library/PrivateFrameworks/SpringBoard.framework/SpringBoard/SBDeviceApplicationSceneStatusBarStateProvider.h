@class UIApplicationSceneClientSettingsDiffInspector, NSString, SBDeviceApplicationSceneHandle, SBSUIInCallSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector *_appSceneSettingsDiffInspector;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    BOOL _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (id)breadcrumbProvider;
- (long long)_statusBarStyle;
- (id)_initWithSceneHandle:(id)a0;
- (long long)_fallbackInterfaceOrientation;
- (id)overlayStatusBarData;
- (id)_statusBarPartStyles;
- (BOOL)_suppressInheritedPartStyles;
- (BOOL)_anyObserverWants:(SEL)a0;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)invalidateStatusBarSettings;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (id)statusBarSceneIdentifier;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (double)_statusBarAlpha;
- (int)statusBarStyleOverridesToSuppress;
- (void).cxx_destruct;
- (id)sceneToHandleStatusBarTapIfExists;
- (id)classicApplicationSceneHandleIfExists;
- (void)dealloc;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)_handleStatusBarStyleOverridesToSuppressUpdate;
- (void)_performUpdateWith:(id)a0 actions:(id /* block */)a1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (void)invalidate;

@end
