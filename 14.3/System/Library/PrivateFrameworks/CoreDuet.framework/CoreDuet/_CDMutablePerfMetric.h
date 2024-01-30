@class _DKEventStatsTimerCounter, NSObject;
@protocol OS_os_activity;

@interface _CDMutablePerfMetric : _CDPerfMetric {
    NSObject<OS_os_activity> *_os_activity;
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _os_activity_scope_state;
    _DKEventStatsTimerCounter *_eventStatsTimerCounter;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 string:(id)a1 family:(id)a2;
- (void)startTelemetryWithOSActivity:(id)a0;
- (void)endTimingWithEvent:(struct _CDPerfEvent { double x0; double x1; } *)a0 resultCount:(unsigned long long)a1 incrementErrorCount:(BOOL)a2;

@end
