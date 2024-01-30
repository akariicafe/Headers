@class NSCalendar, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SBPowerLogMetricsAggregator : NSObject {
    NSObject<OS_dispatch_queue> *_backgroundPowerLogQueue;
    BOOL _flushScheduled;
    NSMutableDictionary *_eventsWithDuration;
    NSCalendar *_gregorian;
}

- (id)init;
- (void).cxx_destruct;
- (void)_flushEvents;
- (void)_startTimerIfNecessary;
- (void)emitEventOfType:(unsigned long long)a0;
- (void)emitEventOfType:(unsigned long long)a0 withDuration:(double)a1;
- (void)flushEventsDueToIminentPowerdown;

@end
