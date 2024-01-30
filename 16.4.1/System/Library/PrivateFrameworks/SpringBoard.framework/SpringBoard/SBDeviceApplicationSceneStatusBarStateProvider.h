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

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (id)_initWithSceneHandle:(id)a0;
- (id)classicApplicationSceneHandleIfExists;
- (long long)_statusBarStyle;
- (id)overlayStatusBarData;
- (id)breadcrumbProvider;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (long long)_defaultStatusBarStyle;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (void)_handleStatusBarStyleOverridesToSuppressUpdate;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (id)sceneToHandleStatusBarTapIfExists;
- (id)_statusBarPartStyles;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppCanChange;
- (void)dealloc;
- (void)invalidateStatusBarSettings;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppInOrientation:(long long)a0;
- (void)_performUpdateWith:(id)a0 actions:(id /* block */)a1;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (BOOL)_anyObserverWants:(SEL)a0;
- (void)invalidate;
- (double)_statusBarAlpha;
- (BOOL)_suppressInheritedPartStyles;
- (void).cxx_destruct;
- (id)statusBarSceneIdentifier;
- (long long)_fallbackInterfaceOrientation;

@end
