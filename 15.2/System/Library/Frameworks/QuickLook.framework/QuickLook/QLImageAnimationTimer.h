@class NSMutableSet, CADisplayLink;

@interface QLImageAnimationTimer : NSObject

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;

+ (id)sharedTimer;

- (void).cxx_destruct;
- (id)init;
- (void)removeAnimationTimerObserver:(id)a0;
- (void)addAnimationTimerObserver:(id)a0;
- (void)animationTimerFired:(id)a0;

@end
