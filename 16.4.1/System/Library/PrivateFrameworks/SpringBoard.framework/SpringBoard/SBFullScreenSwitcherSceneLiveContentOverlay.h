@class UIView, NSString, SBSDisplayLayoutElement, SBWindowScene, NSMutableDictionary, SBOrientationTransformWrapperView, UIViewController, UIApplicationSceneClientSettingsDiffInspector, SBSceneViewStatusBarAssertion;
@protocol SBDeviceApplicationSceneViewControlling, SBSwitcherLiveContentOverlayDelegate, SBFullScreenSwitcherSceneLiveContentOverlayDelegate, BSInvalidatable;

@interface SBFullScreenSwitcherSceneLiveContentOverlay : NSObject <SBFullScreenSwitcherSceneLiveContentOverlay, SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControllerDelegate, SBDeviceApplicationSceneViewControllerDelegate, FBSceneLayerManagerObserver, FBSceneObserver> {
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    NSMutableDictionary *_backboardSceneHostRegistrations;
    long long _touchBehavior;
    BOOL _displayLayoutElementActive;
    SBWindowScene *_sbWindowScene;
}

@property (readonly, nonatomic) SBOrientationTransformWrapperView *orientationWrapperView;
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneViewControlling> *deviceApplicationSceneViewController;
@property (readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion;
@property (readonly, nonatomic) SBSDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) id<BSInvalidatable> displayLayoutElementAssertion;
@property (readonly, nonatomic) BOOL wantsMinificationFilter;
@property (readonly, nonatomic) BOOL asyncRenderingDisabled;
@property (readonly, nonatomic) BOOL asynchronousRenderingTemporarilyDisabled;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (readonly, nonatomic, getter=isMatchMovedToScene) BOOL matchMovedToScene;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id<SBFullScreenSwitcherSceneLiveContentOverlayDelegate> statusBarActionDelegate;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayDelegate> delegate;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled;
@property (nonatomic) BOOL resizesHostedContext;
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly, nonatomic) long long touchBehavior;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHomeButtonLongPress;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (double)currentStatusBarHeight;
- (long long)leadingStatusBarStyle;
- (BOOL)applicationSceneViewControllerIsInNonrotatingWindow:(id)a0;
- (void)applicationSceneViewController:(id)a0 statusBarTapped:(id)a1 tapActionType:(long long)a2;
- (long long)preferredInterfaceOrientation;
- (void)_updateTouchBehaviorForScene:(id)a0;
- (void)setAsyncRenderingDisabled:(BOOL)a0;
- (long long)trailingStatusBarStyle;
- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (void)updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (id)prepareOverlayForContentRotation;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (BOOL)handleHomeButtonDoublePress;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (id)_medusaDecoratedDeviceApplicationSceneViewController;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleHomeButtonPress;
- (void)willRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 alongsideContainerView:(id)a2 animated:(BOOL)a3;
- (BOOL)handleLockButtonPress;
- (id)contentViewController;
- (void)applicationSceneViewControllerDidUpdateHomeAffordanceSupportedOrientations:(id)a0;
- (BOOL)handleVolumeDownButtonPress;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (id)overlaySceneHandle;
- (id)_sbWindowScene;
- (void)medusaDecoratedDeviceApplicationSceneViewControllerDidUpdateHomeAffordanceSupportedOrientations:(id)a0;
- (id)_sceneHandleForHardwareButtonEvents;
- (id)liveSceneIdentityToken;
- (void)_updateDisplayLayoutElementActive;
- (void)didRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
- (void)updateTopAffordanceContextMenu;
- (void)setDimmed:(BOOL)a0;
- (unsigned long long)styleOverridesToSuppress;
- (BOOL)medusaDecoratedDeviceApplicationSceneViewControllerIsInNonrotatingWindow:(id)a0;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)a0;
- (BOOL)hitTestedToTopAffordance:(struct CGPoint { double x0; double x1; })a0 window:(id)a1;
- (void)setBlurViewIconScale:(double)a0;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)configureWithWorkspaceEntity:(id)a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentOrientation:(long long)a2 containerOrientation:(long long)a3 layoutRole:(long long)a4 sbsDisplayLayoutRole:(long long)a5 spaceConfiguration:(long long)a6 floatingConfiguration:(long long)a7 hasClassicAppOrientationMismatch:(BOOL)a8 sizingPolicy:(long long)a9;
- (void)_updateTopAffordanceAutoHide;
- (void)dealloc;
- (long long)overlayType;
- (void)_settingsDidUpdateEdgeProtectOrAutoHideOnHomeGrabberView;
- (id)newPortaledLiveContentOverlayView;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1;
- (void)setTouchBehavior:(long long)a0;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)a0;
- (id)init;
- (BOOL)isContentUpdating;
- (void)medusaDecoratedDeviceApplicationSceneViewController:(id)a0 statusBarTapped:(id)a1 tapActionType:(long long)a2;
- (void)_updateAsyncRendering;
- (void)invalidate;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)setAsyncRenderingEnabled:(BOOL)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void)setMatchMovedToScene:(BOOL)a0;
- (void)disableAsynchronousRenderingForNextCommit;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)_updateOrientationWrapper;

@end
