@class CADisplayLink;
@protocol SKUIDynamicBarAnimatorDelegate;

@interface SKUIDynamicBarAnimator : NSObject {
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    BOOL _dragging;
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    double _lastOffset;
    BOOL _inSteadyState;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long targetState;
@property (readonly, nonatomic) double topBarHeight;
@property (readonly, nonatomic) double bottomBarOffset;
@property (nonatomic) double minimumTopBarHeight;
@property (nonatomic) double maximumBottomBarOffset;
@property (weak, nonatomic) id<SKUIDynamicBarAnimatorDelegate> delegate;

- (double)_constrainTopBarHeight:(double)a0;
- (void)_updateDisplayLink;
- (void)_setInSteadyState:(BOOL)a0;
- (void)_displayLinkFired:(id)a0;
- (void)updateDraggingWithOffset:(double)a0;
- (void)endDraggingWithTargetOffset:(double)a0 velocity:(double)a1;
- (void)_transitionToSteadyState;
- (double)_bottomBarOffsetForTopBarHeight:(double)a0;
- (void)setBottomBarOffset:(double)a0 forState:(long long)a1;
- (void)dealloc;
- (BOOL)canTransitionToState:(long long)a0;
- (void)attemptTransitionToState:(long long)a0 animated:(BOOL)a1;
- (id)init;
- (void)_updateOutputs;
- (void).cxx_destruct;
- (void)setTopBarHeight:(double)a0 forState:(long long)a1;
- (void)beginDraggingWithOffset:(double)a0;
- (void)_moveBarsWithDelta:(double)a0;
- (double)_topBarHeightForBottomBarOffset:(double)a0;

@end
