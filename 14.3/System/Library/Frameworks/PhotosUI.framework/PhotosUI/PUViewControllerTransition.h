@class NSString, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerContextTransitioning;

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property (nonatomic, setter=_setInteractiveProgress:) double interactiveProgress;
@property (nonatomic, getter=isInteractive, setter=_setInteractive:) BOOL interactive;
@property (nonatomic) double visibleInteractiveProgress;
@property (nonatomic) BOOL startedInteractively;
@property (readonly, nonatomic) double imageModulationIntensity;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactionControllerForAnimationController:(id)a0;

- (id)toViewController;
- (void)animationEnded:(BOOL)a0;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (id)initWithDuration:(double)a0;
- (void)setTransitionContext:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransitionProgress:(double)a0 visibleTransitionProgress:(double)a1;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalToViewFrame;
- (id)fromViewController;
- (void)imageModulationIntensityDidChange;
- (id)interactiveTransition;
- (void)didCompleteTransitionAnimation;
- (id)transitionContext;
- (void)completeTransition:(BOOL)a0;
- (id)_newInteractiveTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFromViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialToViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFromViewFrame;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransitionProgress:(double)a0;

@end
