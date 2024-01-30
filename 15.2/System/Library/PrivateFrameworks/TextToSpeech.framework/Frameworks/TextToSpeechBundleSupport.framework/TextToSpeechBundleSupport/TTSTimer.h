@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TTSTimer : NSObject {
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _paused;
}

- (id)initWithDispatchQueue:(id)a0;
- (void)clearQueue;
- (void)_startTimer:(id)a0;
- (void)dealloc;
- (void)_createTimer;
- (void)pauseQueue;
- (void)_handleTimerFired;
- (void)enqueueBlock:(id /* block */)a0 withDelay:(double)a1 withId:(long long)a2;
- (void)continueQueue;

@end
