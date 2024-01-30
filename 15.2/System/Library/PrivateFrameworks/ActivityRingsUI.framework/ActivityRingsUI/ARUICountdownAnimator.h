@class ARUICountdownTimeline, ARUICountdownView;
@protocol ARUICountdownAnimatorDelegate, ARUICountdownAnimation;

@interface ARUICountdownAnimator : NSObject {
    struct { BOOL willBeginAnimating; BOOL willBeginAnimation; BOOL performingAnimation; BOOL completedAnimation; BOOL didFinishAnimating; } _delegateFlags;
    BOOL _animating;
    BOOL _canceled;
    id<ARUICountdownAnimation> _currentAnimation;
}

@property (retain, nonatomic) ARUICountdownTimeline *timeline;
@property (weak, nonatomic) ARUICountdownView *countdownView;
@property (weak, nonatomic) id<ARUICountdownAnimatorDelegate> delegate;

- (BOOL)canceled;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)initWithTimeline:(id)a0;
- (void)cancelAnimations;
- (void)prepareToAnimate;
- (void)_delegate_willBeginAnimating;
- (void)_applyAnimationAtIndex:(unsigned long long)a0;
- (void)_delegate_didFinishAnimating;
- (void)_delegate_willBeginAnimation:(id)a0 afterDelay:(double)a1;
- (void)_delegate_performingAnimation:(id)a0 withDuration:(double)a1;
- (void)_delegate_completedAnimation:(id)a0;
- (void)_applyCancelAnimationAtIndex:(unsigned long long)a0;
- (void)beginAnimations;

@end
