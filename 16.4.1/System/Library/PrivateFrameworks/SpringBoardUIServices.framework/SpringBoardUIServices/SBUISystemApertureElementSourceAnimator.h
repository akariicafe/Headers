@class UIWindow, NSString, SBUISystemApertureAnimationParameters, NSMutableArray;
@protocol UIViewControllerContextTransitioning;

@interface SBUISystemApertureElementSourceAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    NSMutableArray *_preflightActions;
    NSMutableArray *_postflightActions;
    NSMutableArray *_preAlongsideAnimations;
    NSMutableArray *_postAlongsideAnimations;
    UIWindow *_window;
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly, nonatomic) SBUISystemApertureAnimationParameters *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeAnimator;
+ (void)setActiveAnimator:(id)a0;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)_finishTransition:(BOOL)a0;
- (void)_performAnimation;
- (void)addPostAlongsideAnimation:(id /* block */)a0;
- (void)addPostflightAction:(id /* block */)a0;
- (void)addPreAlongsideAnimation:(id /* block */)a0;
- (void)addPreflightAction:(id /* block */)a0;
- (id)initWithSettings:(id)a0 window:(id)a1;

@end
