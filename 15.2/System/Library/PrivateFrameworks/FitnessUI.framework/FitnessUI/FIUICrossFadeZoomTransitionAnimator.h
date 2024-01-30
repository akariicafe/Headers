@class NSString, UIView;

@interface FIUICrossFadeZoomTransitionAnimator : NSObject <FIUIViewControllerAnimatedTransitioning> {
    id /* block */ _animationCompletionBlock;
    BOOL _transitionCompleted;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) UIView *smallView;
@property (retain, nonatomic) UIView *largeView;
@property (nonatomic) BOOL zoomingUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (void)completeTransitionImmediately;

@end
