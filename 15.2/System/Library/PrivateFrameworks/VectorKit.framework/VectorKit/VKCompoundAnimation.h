@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)stopAnimation:(BOOL)a0;
- (BOOL)running;
- (BOOL)runsForever;
- (void)setRunsForever:(BOOL)a0;
- (BOOL)timed;
- (void)onTimerFired:(double)a0;
- (id)initWithAnimations:(id)a0;
- (void)setDuration:(double)a0;
- (double)duration;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)startWithRunner:(id)a0;

@end
