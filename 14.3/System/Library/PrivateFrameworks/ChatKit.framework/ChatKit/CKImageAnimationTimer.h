@class NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject {
    unsigned long long _frame;
}

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL shouldStopWhenBackgrounded;

+ (id)sharedTimer;

- (id)init;
- (void).cxx_destruct;
- (void)removeAnimationTimerObserver:(id)a0;
- (void)addAnimationTimerObserver:(id)a0;
- (void)dealloc;
- (void)updateDisplayLink;
- (void)animationTimerFired;
- (unsigned long long)frame;

@end
