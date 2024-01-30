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
- (void)animateTransition:(id)a0;
- (void)completeTransition:(BOOL)a0;
- (id)transitionContext;
- (void)finishInteractiveTransition;
- (double)transitionDuration:(id)a0;
- (void)setTransitionContext:(id)a0;
- (id)containerView;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (id)fromViewController;
- (id)initWithDuration:(double)a0;
- (void)animationEnded:(BOOL)a0;
- (id)interactiveTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalToViewFrame;
- (void)imageModulationIntensityDidChange;
- (void)didCompleteTransitionAnimation;
- (void)updateInteractiveTransitionProgress:(double)a0;
- (void)updateInteractiveTransitionProgress:(double)a0 visibleTransitionProgress:(double)a1;
- (id)_newInteractiveTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFromViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialToViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFromViewFrame;

@end
