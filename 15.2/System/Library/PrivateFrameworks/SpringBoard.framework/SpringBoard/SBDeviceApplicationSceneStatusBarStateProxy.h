@class NSString, SBDeviceApplicationSceneStatusBarStateProvider, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    SBDeviceApplicationSceneStatusBarStateProvider *_stateProvider;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1 forPartWithIdentifier:(id)a2;
- (id)_statusBarPartStyles;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (BOOL)_anyObserverWants:(SEL)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarOrientationTo:(long long)a1;
- (id)sceneToHandleStatusBarTapIfExists;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)a0;
- (double)_statusBarAlpha;
- (void)invalidateStatusBarSettings;
- (id)classicApplicationSceneHandleIfExists;
- (void)sceneWithIdentifier:(id)a0 didChangeSceneInterfaceOrientationTo:(long long)a1;
- (id)breadcrumbProvider;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (id)overlayStatusBarData;
- (void).cxx_destruct;
- (long long)_fallbackInterfaceOrientation;
- (long long)_statusBarStyle;
- (void)invalidate;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_suppressInheritedPartStyles;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (id)statusBarSceneIdentifier;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;

@end
