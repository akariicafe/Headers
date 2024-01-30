@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)onTimerFired:(double)a0;
- (id)init;
- (void)dealloc;
- (void)setRunsForever:(BOOL)a0;
- (void)pause;
- (BOOL)runsForever;
- (void)resume;
- (void)stopAnimation:(BOOL)a0;

@end
