@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface INWatchdogTimer : NSObject {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)cancel;
- (void)_reset;
- (void)_stop;
- (void)_start;
- (BOOL)cancelIfNotAlreadyCanceled;
- (BOOL)isCanceled;
- (BOOL)_isCanceled;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)dealloc;
- (void)stop;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (void)start;
- (void)_cancel;

@end
