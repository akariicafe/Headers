@class NSDate, NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject {
    unsigned long long _frame;
}

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL shouldStopWhenBackgrounded;

+ (id)sharedTimer;

- (unsigned long long)frame;
- (void)updateDisplayLink;
- (void).cxx_destruct;
- (id)init;
- (void)animationTimerFired;
- (void)dealloc;
- (void)removeAnimationTimerObserver:(id)a0;
- (void)addAnimationTimerObserver:(id)a0;
- (BOOL)__im_ff_psEnabled;

@end
