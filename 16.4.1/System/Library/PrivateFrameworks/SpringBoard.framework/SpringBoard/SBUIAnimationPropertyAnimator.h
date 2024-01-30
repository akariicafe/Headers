@class UIViewPropertyAnimator, NSString, NSMutableArray;

@interface SBUIAnimationPropertyAnimator : NSObject <SBViewControllerAnimatedTransitioning> {
    NSMutableArray *_completionBlocks;
    BOOL _wasStarted;
    unsigned long long _reverseCount;
}

@property (readonly, copy, nonatomic) id /* block */ generator;
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL isReversed;
@property (readonly, nonatomic) BOOL wasReversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)addCompletion:(id /* block */)a0;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void).cxx_destruct;
- (void)_executeGenerator:(id)a0;
- (id)initWithPropertyAnimator:(id)a0 duration:(double)a1;
- (id)initWithPropertyAnimatorGenerator:(id /* block */)a0;
- (void)prepareToRunAnimation:(id)a0;
- (void)reverseAnimation;

@end
