@class NSDate, NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject

@property (nonatomic) unsigned long long frame;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL shouldStopWhenBackgrounded;

+ (id)sharedTimer;

- (void)updateDisplayLink;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addAnimationTimerObserver:(id)a0;
- (void)animationTimerFired;
- (void)removeAnimationTimerObserver:(id)a0;

@end
