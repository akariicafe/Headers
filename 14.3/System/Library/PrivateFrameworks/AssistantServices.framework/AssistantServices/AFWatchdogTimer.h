@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AFWatchdogTimer : NSObject <NSCopying> {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _timeoutHandler;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
}

- (void)cancel;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)reset;
- (void)dealloc;
- (void)stop;
- (void)start;
- (BOOL)isStopped;

@end
