@class UIView, NSString, SBDeviceApplicationSceneHandle, NSSet, SBApplicationSceneView, SBActivationSettings, NSMutableSet, SBDeviceApplicationSceneViewController;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext, SBAppViewControllerDelegate;

@interface SBAppViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable> {
    NSString *_identifier;
    SBDeviceApplicationSceneViewController *_deviceAppViewController;
    SBActivationSettings *_activationSettings;
    NSMutableSet *_activeTransitions;
    BOOL _sceneContentIsReady;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<SBAppViewControllerDelegate> delegate;
@property (nonatomic) BOOL automatesLifecycle;
@property (nonatomic) long long requestedMode;
@property (readonly, nonatomic) long long currentMode;
@property (readonly, nonatomic) SBApplicationSceneView *appView;
@property (nonatomic) BOOL ignoresOcclusions;
@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (nonatomic) BOOL wantsSecureRendering;
@property (nonatomic) BOOL placeholderContentEnabled;
@property (retain, nonatomic) SBActivationSettings *supplementalActivationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentReferenceSize;
@property (readonly, nonatomic) long long contentInterfaceOrientation;

- (void)willMoveToParentViewController:(id)a0;
- (BOOL)isHostingAnApp;
- (id)newSnapshotView;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (id)hostedAppSceneHandle;
- (BOOL)canHostAnApp;
- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (void)conformsToSBApplicationHosting;
- (void)_activateApp;
- (id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)a0 deliveringActions:(BOOL)a1;
- (void)_destroySceneViewController;
- (id)newSnapshot;
- (id)hostedAppSceneHandles;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 withInterfaceOrientation:(long long)a1;
- (void)newSnapshotViewOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)_updateForAppearanceState:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_transformHostedAppViewForRotationToOrientation:(long long)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_installedAppsDidChange:(id)a0;
- (id)initWithIdentifier:(id)a0 andApplicationSceneEntity:(id)a1;
- (void)setDisplayMode:(long long)a0 animationFactory:(id)a1 completion:(id /* block */)a2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)a0;
- (void)_sendActions:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_createSceneViewController;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_configureApplicationSceneEntity:(id)a0 deliveringActions:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_deactivateHostedApp;
- (void)_setCurrentMode:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;

@end
