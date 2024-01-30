@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TTSTimer : NSObject {
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _paused;
}

- (void)_startTimer:(id)a0;
- (void)_createTimer;
- (void)continueQueue;
- (void)clearQueue;
- (void)_handleTimerFired;
- (void)enqueueBlock:(id /* block */)a0 withDelay:(double)a1 withId:(long long)a2;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)pauseQueue;
- (void).cxx_destruct;

@end
