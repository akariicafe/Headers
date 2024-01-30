@interface QLPUTimedAnimationGroup : QLPUAnimationGroup {
    BOOL _areAnimationsPaused;
    double _pausedElapsedTime;
}

@property (nonatomic) double beginTime;
@property (readonly, nonatomic) double currentTime;

- (void)setElapsedTime:(double)a0;
- (void)_update;
- (double)elapsedTime;
- (void)updateAnimations;
- (id)init;
- (void)pauseAnimations;
- (void)resumeAnimations;

@end
