@class PUPhotoPinchGestureRecognizer, PUImportOneUpModalTransition, NSString, UIPanGestureRecognizer, UIViewController;

@interface PUImportOneUpTransitionController : PUModalTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *presentingPinchGestureRecognizer;
@property (retain, nonatomic) PUPhotoPinchGestureRecognizer *dismissPinchGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) long long operation;
@property (retain, nonatomic) PUImportOneUpModalTransition *transition;
@property (nonatomic) BOOL hasInstalledDismissGestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (id)interactionControllerForDismissal:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (void)startInteractiveTransition:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (BOOL)continuousGestureRecognizerIsActive:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithPresentingViewController:(id)a0 pinchGestureRecognizer:(id)a1;
- (void)maybeInitiateInteractiveDismiss:(id)a0;
- (void)installDismissGestureRecognizersOnView:(id)a0;

@end
