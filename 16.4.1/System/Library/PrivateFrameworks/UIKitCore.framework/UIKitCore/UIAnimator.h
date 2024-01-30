@class NSMutableArray, NSMutableDictionary;

@interface UIAnimator : NSObject {
    NSMutableArray *_animations;
    double _lastUpdateTime;
    NSMutableDictionary *_animatorScreenLinks;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (id)sharedAnimator;

- (void)removeAnimationsForTarget:(id)a0 ofKind:(Class)a1;
- (BOOL)_isRunningAnimation:(id)a0;
- (void)_advanceAnimationsOnScreenWithIdentifier:(id)a0 withTimestamp:(double)a1;
- (void)_addAnimation:(id)a0 withDuration:(double)a1 start:(BOOL)a2 startTime:(double)a3;
- (void)startAnimation:(id)a0;
- (void)dealloc;
- (void)addAnimation:(id)a0 withDuration:(double)a1 start:(BOOL)a2;
- (id)init;
- (void)stopAnimation:(id)a0;
- (void)_startAnimation:(id)a0 withStartTime:(double)a1;
- (void)addAnimations:(id)a0 withDuration:(double)a1 start:(BOOL)a2;
- (void).cxx_destruct;
- (void)removeAnimationsForTarget:(id)a0;

@end
