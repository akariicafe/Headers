@class NSString, NSMutableDictionary, SBWindowSelfHostWrapper, SBMainDisplaySceneLayoutViewController, SBOrientationTransformWrapperView, UIView, SBFHomeGrabberSettings;

@interface SBSceneLayoutLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay>

@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly, nonatomic) SBWindowSelfHostWrapper *sceneLayoutWindowHostWrapper;
@property (readonly, nonatomic) SBOrientationTransformWrapperView *sceneLayoutOrientationWrapperView;
@property (readonly, nonatomic) SBFHomeGrabberSettings *grabberSettings;
@property (nonatomic) long long containerOrientation;
@property (retain, nonatomic) NSMutableDictionary *statusBarAssertions;
@property (readonly, nonatomic) long long rasterizationStyle;
@property (readonly, nonatomic) BOOL wantsMinificationFilter;
@property (readonly, nonatomic) BOOL asynchronousRenderingTemporarilyDisabled;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)setRasterizationStyle:(long long)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithSceneLayoutViewController:(id)a0;
- (void)dealloc;
- (void)setHomeGrabberHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)_sceneHandleForHardwareButtonEvents;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)_evaluateAsynchronousRenderingEnablement;

@end
