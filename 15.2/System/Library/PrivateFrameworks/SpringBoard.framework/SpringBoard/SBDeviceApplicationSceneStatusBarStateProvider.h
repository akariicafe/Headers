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

- (id)_statusBarPartStyles;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppCanChange;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (BOOL)_anyObserverWants:(SEL)a0;
- (void)_performUpdateWith:(id)a0 actions:(id /* block */)a1;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (id)sceneToHandleStatusBarTapIfExists;
- (double)_statusBarAlpha;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)invalidateStatusBarSettings;
- (id)classicApplicationSceneHandleIfExists;
- (id)breadcrumbProvider;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (id)overlayStatusBarData;
- (void).cxx_destruct;
- (long long)_fallbackInterfaceOrientation;
- (long long)_statusBarStyle;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppInOrientation:(long long)a0;
- (void)invalidate;
- (void)_handleStatusBarStyleOverridesToSuppressUpdate;
- (id)_initWithSceneHandle:(id)a0;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_suppressInheritedPartStyles;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (id)statusBarSceneIdentifier;

@end
