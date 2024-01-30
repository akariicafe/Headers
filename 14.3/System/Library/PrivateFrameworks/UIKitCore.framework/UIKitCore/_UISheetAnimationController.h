@class UIViewPropertyAnimator, NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface _UISheetAnimationController : NSObject <UIViewControllerAnimatedTransitioning_Internal, UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly, nonatomic) BOOL isForward;
@property (retain, nonatomic) UIView *forwardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } forwardViewFullFrame;
@property (nonatomic) BOOL isInInitialLayout;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (nonatomic) BOOL scalesDownForwardView;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) struct CGPoint { double x; double y; } attachmentPoint;
@property (nonatomic) BOOL isReversed;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (copy, nonatomic) id /* block */ noninteractiveAnimations;
@property (copy, nonatomic) id /* block */ noninteractiveCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)layoutTransitionViews;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void)runNoninteractiveAnimationsIfPossible;
- (BOOL)_allowKeyboardToAnimateAlongside:(id)a0;

@end
