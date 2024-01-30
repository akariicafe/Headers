@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)setRunsForever:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (BOOL)runsForever;
- (void)pause;
- (id)init;
- (void)stopAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)resume;

@end
