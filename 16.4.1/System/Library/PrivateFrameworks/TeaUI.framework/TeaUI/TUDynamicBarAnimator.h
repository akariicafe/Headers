@class CADisplayLink;
@protocol TUDynamicBarAnimatorDelegate;

@interface TUDynamicBarAnimator : NSObject {
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
@property (readonly, nonatomic) double maximumTopBarHeight;
@property (readonly, nonatomic) double minimumBottomBarOffset;
@property (weak, nonatomic) id<TUDynamicBarAnimatorDelegate> delegate;

- (double)_constrainTopBarHeight:(double)a0;
- (void)_updateDisplayLink;
- (void)_setInSteadyState:(BOOL)a0;
- (void)_displayLinkFired:(id)a0;
- (void)_transitionToSteadyState;
- (double)_bottomBarOffsetForTopBarHeight:(double)a0;
- (void)setBottomBarOffset:(double)a0 forState:(long long)a1;
- (BOOL)canTransitionToState:(long long)a0;
- (void)attemptTransitionToState:(long long)a0 animated:(BOOL)a1;
- (id)init;
- (void)_updateOutputs;
- (void)endScrollingWithTargetOffset:(double)a0 velocity:(double)a1;
- (void).cxx_destruct;
- (void)setTopBarHeight:(double)a0 forState:(long long)a1;
- (void)updateScrollingWithOffset:(double)a0;
- (void)beginScrollingWithOffset:(double)a0;
- (void)_moveBarsWithDelta:(double)a0;

@end
