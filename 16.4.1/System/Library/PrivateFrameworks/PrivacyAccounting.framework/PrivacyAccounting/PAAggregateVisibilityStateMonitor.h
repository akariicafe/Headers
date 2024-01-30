@protocol PAProcessStateMonitoring;

@interface PAAggregateVisibilityStateMonitor : NSObject {
    id<PAProcessStateMonitoring> _rawMonitor;
    double _startupInterval;
}

- (void).cxx_destruct;
- (id)initWithRawMonitor:(id)a0 startupInterval:(double)a1;
- (id)startMonitoringAggregateVisibilityStateForBundleIdentifiers:(id)a0 onQueue:(id)a1 withDelegate:(id)a2;

@end
