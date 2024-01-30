@class UIViewPropertyAnimator, NSMutableArray, AVPresentationContext;
@protocol UIViewControllerContextTransitioningEx, AVTransitionDelegate;

@interface AVTransition : NSObject

@property (readonly, weak, nonatomic) id<UIViewControllerContextTransitioningEx> transitionContext;
@property (readonly, nonatomic) UIViewPropertyAnimator *transitionAnimator;
@property (readonly, nonatomic) UIViewPropertyAnimator *clientAnimator;
@property (readonly, nonatomic) NSMutableArray *allAnimators;
@property (retain, nonatomic) AVPresentationContext *presentationContext;
@property (readonly, nonatomic) double transitionAnimatorProgress;
@property (weak, nonatomic) id<AVTransitionDelegate> delegate;

- (void)startInteractiveTransition;
- (void)_presentationTransitionWillBegin;
- (void)completeTransition:(BOOL)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void).cxx_destruct;
- (double)duration;
- (void)dealloc;
- (id)initWithTransitionContext:(id)a0;
- (void)_dismissalTransitionWillBegin;
- (void)updateWithPercentComplete:(double)a0 scale:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2 rotation:(double)a3;
- (void)_animateFinishInteractiveTransition;
- (void)_freezeDismissingViewForFinishing;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)addRunAlongsideAnimationsIfNeeded;
- (void)_presentationTransitionDidEnd:(BOOL)a0;
- (void)_dismissalTransitionDidEnd:(BOOL)a0;
- (void)_startOrContinueAnimatorsReversed:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForPresentedView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_finalFrameForPresentedView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForScale:(double)a0 translation:(struct CGPoint { double x0; double x1; })a1 rotation:(double)a2 locationInWindow:(struct CGPoint { double x0; double x1; })a3 sourceRectInContainerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)_updateCornerAppearanceAttributesOfView:(id)a0 toSourceView:(id)a1 similarity:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceViewFrameInContainerView;

@end
