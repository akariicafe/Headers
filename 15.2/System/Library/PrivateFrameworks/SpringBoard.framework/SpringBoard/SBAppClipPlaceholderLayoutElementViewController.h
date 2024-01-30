@class SBDeviceApplicationSceneStatusBarBreadcrumbProvider, NSString, SBDeviceApplicationSceneHandle, FBScene, _UIStatusBarData, NSMutableArray, SBAppClipOverlayViewController, NSMutableSet;
@protocol SBApplicationSceneStatusBarDescribing, SBDeviceApplicationSceneStatusBarStateObserver;

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding, SBMainDisplaySceneLayoutElementViewControlling> {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    BOOL _isPendingUpdate;
    BOOL _isObservingApplicationInstalls;
    NSMutableArray *_statusBarAssertions;
    NSMutableSet *_maskDisplayCornersReasons;
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
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;

- (void)setShadowOpacity:(double)a0;
- (void)statusBarAssertionDidUpdate:(id)a0;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (void)statusBarAssertionDidInvalidate:(id)a0;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (void)_cleanup;
- (void)_installedApplicationsDidChange:(id)a0;
- (void)viewDidLoad;
- (void)setShadowOffset:(double)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)invalidate;
- (void)setCornerRadiusConfiguration:(id)a0;
- (BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (long long)statusBarStyleForPartWithIdentifier:(id)a0;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (void)setMaskDisplayCorners:(BOOL)a0 forReason:(id)a1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (void)_beginPollingUpdateStillAvailable;
- (void)_launchApplication:(id)a0;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (unsigned long long)supportedContentInterfaceOrientations;
- (void)_stopObservingApplicationInstalls;
- (void)_beginObservingApplicationInstalls;
- (void)_statusBarAssertionDidUpdate;
- (id)_aggregateStatusBarOverrideSettings;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;

@end
