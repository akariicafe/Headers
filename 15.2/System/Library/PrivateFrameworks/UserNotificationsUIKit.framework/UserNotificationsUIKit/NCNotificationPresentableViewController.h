@class NSString, NCNotificationViewController, UIViewController;
@protocol NCNotificationPresentableViewControllerDelegate, BNPresentableContext, BNPanGestureProxy;

@interface NCNotificationPresentableViewController : UIViewController <BNPresentable, NCNotificationViewControllerObserving>

@property (weak, nonatomic, getter=_panGestureProxy, setter=_setPanGestureProxy:) id<BNPanGestureProxy> panGestureProxy;
@property (nonatomic, getter=_isReadyForPanGestureProxy, setter=_setReadyForPanGestureProxy:) BOOL readyForPanGestureProxy;
@property (nonatomic, getter=_initialBannerFrame, setter=_setInitialBannerFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialBannerFrame;
@property (nonatomic, getter=_canPan, setter=_setCanPan:) BOOL canPan;
@property (nonatomic, getter=_isPanPresentation, setter=_setPanPresentation:) BOOL panPresentation;
@property (nonatomic, getter=_presentationState, setter=_setPresentationState:) long long presentationState;
@property (weak, nonatomic) id<NCNotificationPresentableViewControllerDelegate> delegate;
@property (readonly, nonatomic) NCNotificationViewController *notificationViewController;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentableWillAppearAsBanner:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)a0;
- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (BOOL)_isAppearingOrAppeared;
- (void)viewWillLayoutSubviews;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (void)longLookDidDismissForNotificationViewController:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)shouldAutorotate;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (id)presentableDescription;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNotificationViewController:(id)a0;
- (BOOL)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x0; double x1; })a0;

@end
