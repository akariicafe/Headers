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

- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)start;
- (BOOL)isStopped;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)cancel;
- (void)reset;
- (void)stop;

@end
