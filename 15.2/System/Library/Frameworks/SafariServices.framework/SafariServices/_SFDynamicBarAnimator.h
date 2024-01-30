@class NSPointerArray, CADisplayLink;
@protocol _SFDynamicBarAnimatorDelegate;

@interface _SFDynamicBarAnimator : NSObject {
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    double _lastOffset;
    BOOL _inSteadyState;
    BOOL _performingBatchUpdates;
    NSPointerArray *_stateObservers;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long targetState;
@property (readonly, nonatomic) double topBarHeight;
@property (readonly, nonatomic) double bottomBarOffset;
@property (readonly, nonatomic, getter=isSendingOutputsDidChange) BOOL sendingOutputsDidChange;
@property (readonly, nonatomic, getter=isTrackingDrag) BOOL trackingDrag;
@property (readonly, nonatomic) BOOL isInSteadyState;
@property (nonatomic) double minimumTopBarHeight;
@property (weak, nonatomic) id<_SFDynamicBarAnimatorDelegate> delegate;

- (void)performBatchUpdates:(id /* block */)a0;
- (void)_updateDisplayLink;
- (void)_endDraggingWithVelocity:(double)a0;
- (void)attemptTransitionToState:(long long)a0 animated:(BOOL)a1;
- (void)beginDraggingWithOffset:(double)a0;
- (void)_displayLinkFired:(id)a0;
- (void)_transitionToSteadyState;
- (void)setBottomBarOffset:(double)a0 forState:(long long)a1;
- (void)_moveBarsWithDelta:(double)a0;
- (void)setTopBarHeight:(double)a0 forState:(long long)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)endScrolling;
- (void)_setInSteadyState:(BOOL)a0;
- (void)endDraggingWithTargetOffset:(double)a0 velocity:(double)a1;
- (void)_updateOutputs;
- (void).cxx_destruct;
- (BOOL)_canTransitionToState:(long long)a0 withMinimumTopBarHeight:(double)a1;
- (id)init;
- (double)_constrainTopBarHeight:(double)a0;
- (BOOL)canTransitionToState:(long long)a0;
- (void)dealloc;
- (double)_bottomBarOffsetForTopBarHeight:(double)a0;
- (double)_constrainTopBarHeight:(double)a0 withMinimumTopBarHeight:(double)a1;
- (void)updateDraggingWithOffset:(double)a0;

@end
