@class NSMutableArray;

@interface UIAnimator : NSObject {
    NSMutableArray *_animations;
    double _lastUpdateTime;
    id _heartbeat[3];
    int _heartbeatClientCount[3];
    struct _UIUpdateSequenceItemInternal { } *_updateSequenceItem;
}

+ (void)enableAnimation;
+ (id)sharedAnimator;
+ (void)disableAnimation;

- (void)stopAnimation:(id)a0;
- (void)_TVHeartbeatCallback:(id)a0;
- (void)addAnimation:(id)a0 withDuration:(double)a1 start:(BOOL)a2;
- (void)_addAnimation:(id)a0 withDuration:(double)a1 start:(BOOL)a2 startTime:(double)a3;
- (void).cxx_destruct;
- (void)removeAnimationsForTarget:(id)a0 ofKind:(Class)a1;
- (void)_startAnimation:(id)a0 withStartTime:(double)a1;
- (void)_TimerHeartbeatCallback:(id)a0;
- (void)addAnimations:(id)a0 withDuration:(double)a1 start:(BOOL)a2;
- (void)dealloc;
- (BOOL)_isRunningAnimation:(id)a0;
- (void)removeAnimationsForTarget:(id)a0;
- (void)_advanceAnimationsOfType:(int)a0 withTimestamp:(double)a1;
- (void)startAnimation:(id)a0;
- (void)_LCDHeartbeatCallback:(id)a0;

@end
