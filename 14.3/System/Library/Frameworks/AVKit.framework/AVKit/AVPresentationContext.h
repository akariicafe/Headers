@class AVPresentationContainerView, UIWindow, AVFullScreenViewController, AVPresentationContextTransition, UIView, AVPresentationController, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface AVPresentationContext : NSObject

@property (class, readonly, nonatomic) BOOL supportsInteractiveCounterRotationDismissals;

@property (readonly, weak, nonatomic) AVPresentationController *presentationController;
@property (readonly, nonatomic) long long transitionType;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly, weak, nonatomic) AVPresentationContainerView *presentedView;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) UIWindow *presentationWindow;
@property (readonly, nonatomic) UIView *touchBlockingView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL allowsSecondWindowPresentations;
@property (nonatomic) BOOL wasInitiallyPresentedWithoutSecondWindow;
@property (retain, nonatomic) UIWindow *rotatableSecondWindow;
@property (readonly, weak, nonatomic) AVFullScreenViewController *avFullScreenViewController;
@property (readonly, weak, nonatomic) AVFullScreenViewController *rotatableWindowViewController;
@property (retain, nonatomic) AVPresentationContextTransition *presentingTransition;
@property (retain, nonatomic) AVPresentationContextTransition *dismissingTransition;
@property (readonly, nonatomic) AVPresentationContextTransition *currentTransition;
@property (readonly, nonatomic) BOOL hasActiveTransition;
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property (readonly, nonatomic) BOOL wasInitiallyInteractive;
@property (readonly, nonatomic) BOOL canBeInteractivelyDismissed;
@property (nonatomic) BOOL allowsPausingWhenTransitionCompletes;

- (void).cxx_destruct;
- (id)initWithPresentationController:(id)a0;
- (id)presentingView;
- (id)presentationFromView;
- (id)dismissalToView;

@end
