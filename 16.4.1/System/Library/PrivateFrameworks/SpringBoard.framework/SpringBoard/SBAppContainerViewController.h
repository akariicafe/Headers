@class _SBAppContainerStatusBarStateProxy, NSString, UIApplicationSceneSettingsDiffInspector, UIView, SBApplicationSceneHandle, UIViewController;
@protocol SBScenePlaceholderContentContext, SBApplicationSceneViewControllingStatusBarDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControlling;

@interface SBAppContainerViewController : SBLayoutElementViewController <SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBSceneHandleObserver, SBApplicationSceneViewControlling, SBApplicationSceneStatusBarDescriberProviding> {
    SBApplicationSceneHandle *_applicationSceneHandle;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    long long _requestedDisplayMode;
}

@property (readonly, nonatomic) UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController;
@property (weak, nonatomic) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;
@property (readonly, nonatomic) _SBAppContainerStatusBarStateProxy *statusBarDescriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentReferenceSize;
@property (readonly, nonatomic) long long contentOrientation;
@property (readonly, nonatomic) long long containerOrientation;

- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (id)initWithDisplayIdentity:(id)a0;
- (id)_deviceApplicationSceneHandle;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 withContentOrientation:(long long)a1 andContainerOrientation:(long long)a2;
- (void)setDisplayMode:(long long)a0 animationFactory:(id)a1 completion:(id /* block */)a2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)a0;
- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (id)newSnapshot;
- (void)sceneHandle:(id)a0 didUpdatePairingStatusForExternalSceneIdentifiers:(id)a1;
- (void)prepareForReuse;
- (void)applicationSceneViewController:(id)a0 didUpdateStatusBarSettings:(id)a1;
- (void)_clearState;
- (void)newSnapshotViewOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)newSnapshotView;
- (void)sceneWithIdentifier:(id)a0 didChangeSceneInterfaceOrientationTo:(long long)a1;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
- (id)_applicationSceneViewControllerForSceneHandle:(id)a0;
- (void)_configureViewController:(id)a0;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)a0;
- (void)_updateDisplayLayoutElementForSceneExistence:(id)a0;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)didEndTransitionToVisible:(BOOL)a0;
- (void)setContentWrapperInterfaceOrientation:(long long)a0;

@end
