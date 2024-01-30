@class NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ATXModeScheduler : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    double _leewaySeconds;
    NSDate *_scheduledDate;
}

- (void)cancelPendingOperation;
- (id)runAfterDelaySecondsIfNotYetScheduled:(double)a0;
- (id)init;
- (id)initWithQueue:(id)a0 operationBlock:(id /* block */)a1 andLeeway:(double)a2;
- (void).cxx_destruct;

@end
