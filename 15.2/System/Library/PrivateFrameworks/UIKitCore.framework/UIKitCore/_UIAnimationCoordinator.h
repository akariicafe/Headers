@class NSMutableDictionary, NSString, _UIViewControllerOneToOneTransitionContext, UIView, UIPercentDrivenInteractiveTransition, UIViewController;

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {
    NSMutableDictionary *_stash;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property (readonly, retain, nonatomic) _UIViewControllerOneToOneTransitionContext *transitionContext;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ preperation;
@property (copy, nonatomic) id /* block */ animator;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (readonly, retain, nonatomic) NSMutableDictionary *stash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animate;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)animateInteractively;
- (void)dealloc;
- (void)_updateTransitionContext;
- (void)finishInteractiveAnimation;
- (void)cancelInteractiveAnimation;
- (void)updateInteractiveProgress:(double)a0;
- (void)animationEnded:(BOOL)a0;

@end
