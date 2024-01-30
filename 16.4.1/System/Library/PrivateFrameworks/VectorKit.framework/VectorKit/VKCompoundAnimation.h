@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)startWithRunner:(id)a0;
- (void)setRunsForever:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (BOOL)timed;
- (BOOL)runsForever;
- (BOOL)running;
- (void)pause;
- (double)duration;
- (id)initWithAnimations:(id)a0;
- (void)stopAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (void)resume;

@end
