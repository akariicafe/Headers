@class UIViewAnimationState, NSMutableArray;

@interface UIViewAnimationBlockDelegate : NSObject {
    BOOL _didBeginBlockAnimation;
    BOOL _isZeroDuration;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    BOOL _animationDidStopSent;
    id /* block */ _start;
    id /* block */ _completion;
    NSMutableArray *_systemPostAnimationActions;
}

@property (readonly, nonatomic) BOOL _allowsUserInteraction;
@property (nonatomic, setter=_setForcingImmediateCompletion:) BOOL _forcingImmediateCompletion;
@property (weak, nonatomic) UIViewAnimationState *_animationState;

+ (id)animationBlockDelegateWithDuration:(double)a0 options:(unsigned long long)a1 start:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)setAnimationBlockDelegateWithDuration:(double)a0 options:(unsigned long long)a1 start:(id /* block */)a2 completion:(id /* block */)a3;

- (void)_didEndBlockAnimation:(id)a0 finished:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (BOOL)_allowsHitTesting;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_sendDeferredCompletion:(id)a0;
- (void)_willBeginBlockAnimation:(id)a0 context:(id)a1;

@end
