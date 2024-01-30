@class UIView, NSString, SBWindowSelfHostWrapper, FBDisplayLayoutElement, SBFHomeGrabberSettings, SBUISizeObservingView, SBFloatingApplicationLiveContentWindow, SBSceneViewStatusBarAssertion, SBMedusaDecoratedDeviceApplicationSceneViewController;

@interface SBFloatingApplicationSceneLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView, SBDeviceApplicationSceneHandleObserver, SBUISizeObservingViewDelegate>

@property (readonly, nonatomic) SBFloatingApplicationLiveContentWindow *window;
@property (readonly, nonatomic) SBWindowSelfHostWrapper *windowHostWrapper;
@property (readonly, nonatomic) SBUISizeObservingView *sizeObservingView;
@property (readonly, nonatomic) SBMedusaDecoratedDeviceApplicationSceneViewController *deviceApplicationSceneViewController;
@property (readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion;
@property (readonly, nonatomic) SBFHomeGrabberSettings *grabberSettings;
@property (readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (readonly, nonatomic) long long rasterizationStyle;
@property (readonly, nonatomic) BOOL wantsMinificationFilter;
@property (readonly, nonatomic) BOOL liveContentRasterizationDisabled;
@property (readonly, nonatomic) BOOL asynchronousRenderingTemporarilyDisabled;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)setRasterizationStyle:(long long)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateLiveContentRasterization;
- (void)dealloc;
- (id)contentViewController;
- (void)setLiveContentRasterizationDisabled:(BOOL)a0;
- (void)setHomeGrabberHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithWindow:(id)a0;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)sizeObservingView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)invalidate;
- (void)noteNeedsLayoutUpdateFor180DegreeRotation;
- (void)configureWithWorkspaceEntity:(id)a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 interfaceOrientation:(long long)a2;
- (void)_updateContentWindowFrameFromView:(id)a0;

@end
