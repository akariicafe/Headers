@class NSCalendar, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SBPowerLogMetricsAggregator : NSObject {
    NSObject<OS_dispatch_queue> *_backgroundPowerLogQueue;
    BOOL _flushScheduled;
    NSMutableDictionary *_eventsWithDuration;
    NSCalendar *_gregorian;
}

- (void).cxx_destruct;
- (id)init;
- (void)_startTimerIfNecessary;
- (void)flushEventsDueToIminentPowerdown;
- (void)emitEventOfType:(unsigned long long)a0;
- (void)emitEventOfType:(unsigned long long)a0 withDuration:(double)a1;
- (void)_flushEvents;

@end
