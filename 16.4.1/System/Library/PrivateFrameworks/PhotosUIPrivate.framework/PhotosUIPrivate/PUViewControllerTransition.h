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

- (void)setTransitionContext:(id)a0;
- (id)initWithDuration:(double)a0;
- (id)containerView;
- (void)animationEnded:(BOOL)a0;
- (id)toViewController;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)cancelInteractiveTransition;
- (id)transitionContext;
- (void)finishInteractiveTransition;
- (void)completeTransition:(BOOL)a0;
- (id)fromViewController;
- (void).cxx_destruct;
- (id)interactiveTransition;
- (id)_newInteractiveTransition;
- (void)didCompleteTransitionAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFromViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalToViewFrame;
- (void)imageModulationIntensityDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFromViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialToViewFrame;
- (void)updateInteractiveTransitionProgress:(double)a0;
- (void)updateInteractiveTransitionProgress:(double)a0 visibleTransitionProgress:(double)a1;

@end
