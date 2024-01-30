@class NSString, UIViewPropertyAnimator, UIView, NSMutableArray, _UISheetPresentationMetrics;
@protocol UIViewControllerContextTransitioning;

@interface _UISheetAnimationController : NSObject <UIViewControllerAnimatedTransitioning_Internal, UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly, nonatomic) BOOL isForward;
@property (retain, nonatomic) UIView *forwardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } forwardViewFullFrame;
@property (nonatomic) BOOL isInInitialLayout;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (retain, nonatomic) _UISheetPresentationMetrics *metrics;
@property (nonatomic) BOOL scalesDownForwardView;
@property (retain, nonatomic) NSMutableArray *allNoninteractiveAnimations;
@property (retain, nonatomic) NSMutableArray *allNoninteractiveCompletions;
@property (copy, nonatomic) id /* block */ defaultSourceFrameProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } interactiveFrame;
@property (nonatomic) struct CGPoint { double x; double y; } attachmentPoint;
@property (nonatomic) BOOL isReversed;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (weak, nonatomic) UIView *sourceView;
@property (copy, nonatomic) id /* block */ noninteractiveAnimations;
@property (copy, nonatomic) id /* block */ noninteractiveCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)layoutTransitionViews;
- (void)addNoninteractiveCompletion:(id /* block */)a0;
- (void)runNoninteractiveAnimationsIfPossible;
- (BOOL)_allowKeyboardToAnimateAlongside:(id)a0;
- (id)init;
- (void)addNoninteractiveAnimations:(id /* block */)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void).cxx_destruct;

@end
