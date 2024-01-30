@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) UIView *toView;
@property (weak, nonatomic) UIView *fromView;
@property (nonatomic) BOOL removeFromView;
@property (nonatomic) int transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (struct CGPoint { double x0; double x1; })transitionView:(id)a0 beginOriginForToView:(id)a1 forTransition:(int)a2 defaultOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)animateTransition:(id)a0;
- (void)_prepareKeyboardForTransition:(int)a0 fromView:(id)a1;
- (void)transitionView:(id)a0 startCustomTransitionWithDuration:(double)a1;
- (double)durationForTransition:(int)a0;
- (void)transitionViewDidComplete:(id)a0 fromView:(id)a1 toView:(id)a2 removeFromView:(BOOL)a3;
- (id)initWithTransition:(int)a0;
- (struct CGPoint { double x0; double x1; })_adjustOrigin:(struct CGPoint { double x0; double x1; })a0 givenOtherOrigin:(struct CGPoint { double x0; double x1; })a1 forTransition:(int)a2;
- (struct CGPoint { double x0; double x1; })transitionView:(id)a0 endOriginForFromView:(id)a1 forTransition:(int)a2 defaultOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)transitionViewDidStart:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })transitionView:(id)a0 endOriginForToView:(id)a1 forTransition:(int)a2 defaultOrigin:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;

@end
