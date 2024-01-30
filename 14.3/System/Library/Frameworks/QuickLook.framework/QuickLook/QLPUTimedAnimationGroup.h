@interface QLPUTimedAnimationGroup : QLPUAnimationGroup {
    BOOL _areAnimationsPaused;
    double _pausedElapsedTime;
}

@property (nonatomic) double beginTime;
@property (readonly, nonatomic) double currentTime;

- (void)setElapsedTime:(double)a0;
- (double)elapsedTime;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (id)init;
- (void)_update;
- (void)updateAnimations;

@end
