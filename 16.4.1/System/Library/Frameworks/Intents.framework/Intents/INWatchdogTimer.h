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

- (BOOL)isCanceled;
- (void)_reset;
- (void)_start;
- (void)_stop;
- (void)_cancel;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (BOOL)_isCanceled;
- (void)cancel;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (void)stop;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void)start;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (void).cxx_destruct;

@end
