@class NSString, SBDeviceApplicationSceneHandle, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, FBScene, NSMutableArray;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing> {
    NSMutableArray *_observers;
}

@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_statusBarPartStyles;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)statusBarPartStyles;
- (double)_statusBarAlpha;
- (id)succinctDescription;
- (void).cxx_destruct;
- (long long)_fallbackInterfaceOrientation;
- (long long)_statusBarStyle;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_allObservers;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_suppressInheritedPartStyles;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (id)_observerRecords;
- (long long)statusBarStyleForPartWithIdentifier:(id)a0;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (void)addStatusBarObserver:(id)a0;
- (void)removeStatusBarObserver:(id)a0;

@end
