@class NSString, NSPointerArray, CADisplayLink;
@protocol _SFDynamicBarAnimatorDelegate;

@interface _SFDynamicBarAnimator : NSObject <SFBarAnimating> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_constrainTopBarHeight:(double)a0;
- (void)_updateDisplayLink;
- (double)_constrainTopBarHeight:(double)a0 withMinimumTopBarHeight:(double)a1;
- (void)_setInSteadyState:(BOOL)a0;
- (void)_displayLinkFired:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateDraggingWithOffset:(double)a0;
- (void)endDraggingWithTargetOffset:(double)a0 velocity:(double)a1;
- (void)performBatchUpdates:(id /* block */)a0;
- (BOOL)_canTransitionToState:(long long)a0 withMinimumTopBarHeight:(double)a1;
- (void)_transitionToSteadyState;
- (double)_bottomBarOffsetForTopBarHeight:(double)a0;
- (void)setBottomBarOffset:(double)a0 forState:(long long)a1;
- (void)dealloc;
- (void)_endDraggingWithVelocity:(double)a0;
- (BOOL)canTransitionToState:(long long)a0;
- (void)removeObserver:(id)a0;
- (void)attemptTransitionToState:(long long)a0 animated:(BOOL)a1;
- (id)init;
- (void)_updateOutputs;
- (void)endScrolling;
- (void).cxx_destruct;
- (void)setTopBarHeight:(double)a0 forState:(long long)a1;
- (void)beginDraggingWithOffset:(double)a0;
- (void)_moveBarsWithDelta:(double)a0;

@end
