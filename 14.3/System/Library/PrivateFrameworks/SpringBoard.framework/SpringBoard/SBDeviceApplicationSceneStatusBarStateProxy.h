@class NSString, SBDeviceApplicationSceneStatusBarStateProvider, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    SBDeviceApplicationSceneStatusBarStateProvider *_stateProvider;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (id)breadcrumbProvider;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1 forPartWithIdentifier:(id)a2;
- (long long)_statusBarStyle;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_fallbackInterfaceOrientation;
- (id)overlayStatusBarData;
- (void)sceneWithIdentifier:(id)a0 didChangeSceneInterfaceOrientationTo:(long long)a1;
- (id)_statusBarPartStyles;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (BOOL)_suppressInheritedPartStyles;
- (BOOL)_anyObserverWants:(SEL)a0;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)a0;
- (void)invalidateStatusBarSettings;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (id)statusBarSceneIdentifier;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (double)_statusBarAlpha;
- (int)statusBarStyleOverridesToSuppress;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarOrientationTo:(long long)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(int)a1;
- (void).cxx_destruct;
- (id)sceneToHandleStatusBarTapIfExists;
- (id)classicApplicationSceneHandleIfExists;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (void)invalidate;

@end
