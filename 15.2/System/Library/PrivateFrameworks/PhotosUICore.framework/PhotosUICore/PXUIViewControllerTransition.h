@class UIViewController, NSString, UIPercentDrivenInteractiveTransition, PXRegionOfInterest;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewController *_internalMasterViewController;
    UIViewController *_internalDetailViewController;
    id /* block */ _transitionAnimationStartHandler;
    id /* block */ _transitionAnimationCompletionHandler;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) long long transitionIdentifier;
@property (retain, nonatomic, setter=_setPauseToken:) id _pauseToken;
@property (readonly, nonatomic) BOOL supportsEdgeSwipeBackGesture;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (retain, nonatomic) PXRegionOfInterest *masterRegionOfInterest;
@property (nonatomic, getter=isTransitioningToDetail) BOOL transitioningToDetail;
@property (readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactionController;
@property (readonly, weak, nonatomic) UIViewController *masterViewController;
@property (readonly, weak, nonatomic) UIViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)a0 detailViewController:(id)a1;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)willStartTransition;
- (void).cxx_destruct;
- (id)init;
- (void)willEndTransition;
- (void)didEndTransition;
- (long long)transitionIdentifierForTransitionMode:(unsigned long long)a0;
- (id)initWithMasterViewController:(id)a0 detailViewController:(id)a1;
- (void)installTransitionAnimationStartHandler:(id /* block */)a0;
- (void)installTransitionAnimationCompletionHandler:(id /* block */)a0;

@end
