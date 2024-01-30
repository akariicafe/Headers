@class UIViewPropertyAnimator, NSMutableArray, AVPresentationContext;
@protocol UIViewControllerContextTransitioningEx, AVTransitionDelegate;

@interface AVTransition : NSObject {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _destinationViewTransform;
}

@property (readonly, weak, nonatomic) id<UIViewControllerContextTransitioningEx> transitionContext;
@property (readonly, nonatomic) UIViewPropertyAnimator *transitionAnimator;
@property (readonly, nonatomic) UIViewPropertyAnimator *clientAnimator;
@property (readonly, nonatomic) NSMutableArray *allAnimators;
@property (retain, nonatomic) AVPresentationContext *presentationContext;
@property (readonly, nonatomic) double transitionAnimatorProgress;
@property (weak, nonatomic) id<AVTransitionDelegate> delegate;

- (void)cancelInteractiveTransition;
- (void)startInteractiveTransition;
- (void)pauseInteractiveTransition;
- (double)duration;
- (void)finishInteractiveTransition;
- (void)completeTransition:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_presentationTransitionWillBegin;
- (id)initWithTransitionContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceViewFrameInContainerView;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)_animateFinishInteractiveTransition;
- (void)_dismissalTransitionDidEnd:(BOOL)a0;
- (void)_dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_finalFrameForPresentedView;
- (void)_freezeDismissingViewForFinishing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForPresentedView;
- (void)_presentationTransitionDidEnd:(BOOL)a0;
- (void)_startOrContinueAnimatorsReversed:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForScale:(double)a0 translation:(struct CGPoint { double x0; double x1; })a1 rotation:(double)a2 locationInWindow:(struct CGPoint { double x0; double x1; })a3 sourceRectInContainerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)_updateCornerAppearanceAttributesOfView:(id)a0 toSourceView:(id)a1 similarity:(double)a2;
- (void)addRunAlongsideAnimationsIfNeeded;
- (void)updateWithPercentComplete:(double)a0 scale:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2 rotation:(double)a3;

@end
