@class UIScreen, _UIFocusEngineScrollableContainerOffsets, NSMapTable, CADisplayLink, NSTimer;

@interface _UIFocusDisplayLinkScrollAnimator : NSObject {
    UIScreen *_screen;
    _UIFocusEngineScrollableContainerOffsets *_singleScrollableContainerEntry;
    NSMapTable *_scrollableContainers;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    double _lastTimerFireDate;
    double _defaultConvergenceRate;
}

@property (nonatomic) double defaultConvergenceRate;

- (void)setTargetContentOffset:(struct CGPoint { double x0; double x1; })a0 forScrollableContainer:(id)a1 convergenceRate:(double)a2 completion:(id /* block */)a3;
- (struct CGPoint { double x0; double x1; })_applyAccelerationLimitToAcceleration:(struct CGPoint { double x0; double x1; })a0 currentOffset:(struct CGPoint { double x0; double x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)adjustTargetContentOffsetForScrollableContainer:(id)a0 byDelta:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForScrollableContainer:(id)a0;
- (void).cxx_destruct;
- (void)cancelScrollingForScrollableContainer:(id)a0;
- (id)initWithScreen:(id)a0;
- (void)_timerHeartbeat:(id)a0;
- (void)_commonHeartbeat:(double)a0;
- (id)_entryForScrollableContainer:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_updateHeartbeatConfiguration;
- (BOOL)_canCreateDisplayLink;
- (BOOL)_shouldPushAndPopRunLoopModes;
- (void)_displayLinkHeartbeat:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_processEntry:(id)a0 timeDelta:(long long)a1 completed:(id)a2;
- (BOOL)isAnimatingScrollableContainer:(id)a0;
- (void)_switchToTimerScrolling;
- (struct CGPoint { double x0; double x1; })currentVelocityForScrollableContainer:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityToScrollFromOffset:(struct CGPoint { double x0; double x1; })a0 toOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;

@end
