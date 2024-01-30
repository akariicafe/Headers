@class NSString, _UIViewControllerOneToOneTransitionContext, UIView;
@protocol UIViewControllerTransitionCoordinator;

@interface BNTransitionContext : NSObject <UIViewControllerContextTransitioning> {
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
}

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (nonatomic, getter=isExplicitCompletionRequired) BOOL explicitCompletionRequired;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fromStartFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fromEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } toEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } toStartFrame;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionContextForTransitionOfViewController:(id)a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inContainerView:(id)a3;
+ (id)transitionContextForTransitionFromViewController:(id)a0 toViewController:(id)a1 inContainerView:(id)a2;

- (id)viewControllerForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (id)viewForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)completeTransition:(BOOL)a0;
- (void)cancelInteractiveTransition;
- (void)__runAlongsideAnimations;
- (void)performTransitionWithAnimator:(id)a0;
- (void)explictlyCompleteTransition:(BOOL)a0;

@end
