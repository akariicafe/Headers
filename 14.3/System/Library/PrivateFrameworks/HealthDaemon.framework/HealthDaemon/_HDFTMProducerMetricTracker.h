@class NSObject, _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

@interface _HDFTMProducerMetricTracker : NSObject {
    _HKExpiringCompletionTimer *_timer;
    id /* block */ _timeoutHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
}

@property (readonly, nonatomic) BOOL metricAvailable;

- (void).cxx_destruct;
- (void)_startTimer;
- (void)pause;
- (void)resume;
- (void)invalidate;
- (id)initWithTimeoutHandler:(id /* block */)a0 queue:(id)a1;
- (void)metricReceived;

@end
