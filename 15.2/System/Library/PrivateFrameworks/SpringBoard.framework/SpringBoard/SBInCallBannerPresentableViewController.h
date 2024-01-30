@class SBDeviceApplicationSceneViewController, NSString, SBDeviceApplicationSceneHandle, SBSceneViewStatusBarAssertion, SBSUIInCallSceneClientSettingsDiffInspector, UIViewController;
@protocol BNPresentableContext, SBInCallBannerPresentableViewControllerDelegate, BNPanGestureProxy;

@interface SBInCallBannerPresentableViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBBannerManagerPresentable, SBButtonEventsHandler, BSInvalidatable> {
    BOOL _didCrossDefaultDraggingThreshold;
    id<BNPanGestureProxy> _lastGestureProxy;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarHiddenAssertion;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
}

@property (class, readonly) double cornerRadius;
@property (class, readonly, copy) NSString *requesterIdentifier;

@property (weak, nonatomic) id<SBInCallBannerPresentableViewControllerDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } preferredBannerContentSize;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic, getter=isCallConnected) BOOL callConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;

- (void)presentableWillAppearAsBanner:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (id)initWithSceneHandle:(id)a0;
- (BOOL)handleHomeButtonDoublePress;
- (void)viewDidLoad;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (BOOL)handleLockButtonPress;
- (BOOL)handleHomeButtonPress;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })visualTranslationInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInCoordinateSpace:(id)a0;
- (id)_inCallSceneClientSettingsDiffInspector;
- (void)_handleTapAction:(id)a0;
- (void)_handlePanGestureProxyAction:(id)a0;
- (void)_callConnectedStatusChanged;
- (struct CGPoint { double x0; double x1; })translationInCoordinateSpace:(id)a0;
- (BOOL)shouldDismissForReason:(id)a0;

@end
