@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface _HKDelayedOperation : NSObject {
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    long long _mode;
    long long _clock;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
    double _lastExecution;
    double _nextScheduledExecution;
    NSString *_loggingName;
    NSObject<OS_os_log> *_loggingCategory;
}

- (void)execute;
- (void)executeWithDelay:(double)a0;
- (void)disableLogging;
- (id)initWithQueue:(id)a0 delay:(double)a1 block:(id /* block */)a2;
- (void)enableLoggingWithName:(id)a0 category:(id)a1;
- (id)initWithMode:(long long)a0 clock:(long long)a1 queue:(id)a2 delay:(double)a3 block:(id /* block */)a4;
- (id)initWithMode:(long long)a0 queue:(id)a1 delay:(double)a2 block:(id /* block */)a3;
- (void)_queue_executeBlockIfScheduled;
- (void)invalidate;
- (void).cxx_destruct;

@end
