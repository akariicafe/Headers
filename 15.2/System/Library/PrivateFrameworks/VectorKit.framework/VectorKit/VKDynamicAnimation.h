@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)stopAnimation:(BOOL)a0;
- (BOOL)runsForever;
- (void)setRunsForever:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (id)init;
- (void)pause;
- (void)resume;
- (void)dealloc;

@end
