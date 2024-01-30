@class NSMutableSet, CADisplayLink;

@interface QLImageAnimationTimer : NSObject

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;

+ (id)sharedTimer;

- (id)init;
- (void).cxx_destruct;
- (void)removeAnimationTimerObserver:(id)a0;
- (void)addAnimationTimerObserver:(id)a0;
- (void)animationTimerFired:(id)a0;

@end
