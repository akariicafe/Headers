@class NSMutableArray, NSString, SBDeviceApplicationSceneHandle, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, FBScene, SBAppClipOverlayViewController;
@protocol SBApplicationSceneStatusBarDescribing, SBDeviceApplicationSceneStatusBarStateObserver;

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding> {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    BOOL _isObservingApplicationInstalls;
    NSMutableArray *_statusBarAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber;
@property (weak, nonatomic) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;

- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
- (void)statusBarAssertionDidInvalidate:(id)a0;
- (unsigned long long)supportedContentInterfaceOrientations;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void).cxx_destruct;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (void)_installedApplicationsDidChange:(id)a0;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (void)_cleanup;
- (void)_launchApplication:(id)a0;
- (BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (void)viewDidLayoutSubviews;
- (void)statusBarAssertionDidUpdate:(id)a0;
- (void)_stopObservingApplicationInstalls;
- (void)viewWillDisappear:(BOOL)a0;
- (void)prepareForReuse;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (long long)statusBarStyleForPartWithIdentifier:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_beginObservingApplicationInstalls;
- (void)_statusBarAssertionDidUpdate;
- (void)invalidate;
- (id)_aggregateStatusBarOverrideSettings;
- (void)viewDidLoad;

@end
