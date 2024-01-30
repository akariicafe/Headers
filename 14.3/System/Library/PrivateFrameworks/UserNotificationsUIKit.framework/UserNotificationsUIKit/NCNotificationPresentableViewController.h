@class NSString, UIViewController, NCNotificationViewController;
@protocol NCNotificationPresentableViewControllerDelegate, BNPanGestureProxy;

@interface NCNotificationPresentableViewController : UIViewController <BNPresentable, NCNotificationViewControllerObserving>

@property (retain, nonatomic, getter=_contextDefiningViewController, setter=_setContextDefiningViewController:) UIViewController *contextDefiningViewController;
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
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (BOOL)shouldAutorotate;
- (BOOL)canBecomeFirstResponder;
- (void)longLookDidDismissForNotificationViewController:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)viewDidLoad;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (BOOL)_isAppearingOrAppeared;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)presentableDescription;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (id)initWithNotificationViewController:(id)a0;
- (BOOL)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)a0;

@end
