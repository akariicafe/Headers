@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)onTimerFired:(double)a0;
- (void)dealloc;
- (void)setRunsForever:(BOOL)a0;
- (id)initWithAnimations:(id)a0;
- (void)pause;
- (double)duration;
- (BOOL)runsForever;
- (void)resume;
- (void)startWithRunner:(id)a0;
- (BOOL)running;
- (BOOL)timed;
- (void)stopAnimation:(BOOL)a0;
- (void)setDuration:(double)a0;

@end
