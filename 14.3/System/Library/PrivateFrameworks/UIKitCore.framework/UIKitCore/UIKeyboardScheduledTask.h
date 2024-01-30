@class NSTimer, _UIActionWhenIdle, UIKeyboardTaskQueue;

@interface UIKeyboardScheduledTask : NSObject

@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) _UIActionWhenIdle *deferredAction;
@property (copy, nonatomic) id /* block */ enqueuedTask;
@property (readonly, nonatomic) id /* block */ task;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) BOOL repeats;

- (void)resetTimer;
- (void)dealloc;
- (void)handleDeferredTimerFiredEvent;
- (void)timerFired:(id)a0;
- (BOOL)isValid;
- (id)initWithTaskQueue:(id)a0 timeInterval:(double)a1 repeats:(BOOL)a2 task:(id /* block */)a3;
- (void)invalidate;

@end
