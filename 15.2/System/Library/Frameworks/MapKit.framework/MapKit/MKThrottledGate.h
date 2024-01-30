@class VKTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MKThrottledGate : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    double _availableTickets;
    double _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}

- (BOOL)_dispatchWaitingJobsIfNecessary;
- (id)description;
- (id)initWithMax:(int)a0 refreshRate:(double)a1 queue:(id)a2;
- (void).cxx_destruct;
- (void)dispatch:(id /* block */)a0;
- (void)_timerFired:(id)a0;
- (void)dealloc;
- (void)_ensureTimer;
- (BOOL)_replenishAvailableJobsIfNecessary;

@end
