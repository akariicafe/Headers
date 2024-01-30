@class _UIViewAnimatablePropertyTransformer, UIViewRunningAnimationEntry, UIViewInProcessAnimationState, NSObject;
@protocol OS_dispatch_queue, UIVectorOperatable, UIViewAnimationComposing;

@interface UIAnimatableProperty : UIAnimatablePropertyBase {
    _UIViewAnimatablePropertyTransformer *_transformer;
    NSObject<OS_dispatch_queue> *_animationEntryLockingQueue;
    NSObject<OS_dispatch_queue> *_invalidationLockingQueue;
    UIViewRunningAnimationEntry *_animationEntry;
    id<UIVectorOperatable> _pendingTargetVelocity;
    id<UIVectorOperatable> _pendingVelocity;
}

@property (retain, nonatomic) id<UIViewAnimationComposing> composer;
@property (retain, nonatomic) UIViewRunningAnimationEntry *animationEntry;
@property (weak, nonatomic) UIViewInProcessAnimationState *animationState;
@property (nonatomic) int ownershipCount;
@property (copy, nonatomic) id /* block */ invalidationCallback;
@property (retain) id presentationValue;
@property (retain) id value;
@property (nonatomic) id velocity;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)velocityTarget:(BOOL)a0;
- (void)setVelocity:(id)a0 target:(BOOL)a1;
- (void).cxx_destruct;
- (void)invalidateAndStopImmediately:(BOOL)a0;
- (void)setTransformer:(id)a0;
- (BOOL)_performAnimation;
- (void)invalidateIfPossible;
- (id)transformer;
- (id)initWithInvalidationCallback:(id /* block */)a0;
- (id)debugDescription;
- (BOOL)animatePropertyWithCurrentValue:(id)a0 targetValue:(id)a1 preTickShouldRemoveCallback:(id /* block */)a2 newValueCallback:(id /* block */)a3 removedCallback:(id /* block */)a4;
- (void)invalidate;

@end
