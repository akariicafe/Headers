@class ATXModeDimensionSet, _ATXAppLaunch, NSMutableDictionary, NSMutableArray;

@interface ATXInterruptedAppSessionAccumulator : NSObject {
    _ATXAppLaunch *_previousLaunch;
    ATXModeDimensionSet *_previousDimensions;
    NSMutableArray *_appSessions;
    NSMutableDictionary *_summaryMetrics;
    NSMutableDictionary *_recentNotifications;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleNotificationEvent:(id)a0;
- (void)logToCoreAnalytics;
- (id)_getSummaryMetricForDimensions:(id)a0;
- (BOOL)_doesLaunchInterruptPreviousLaunch:(id)a0;
- (void)handleNextAppLaunch:(id)a0 dimensionSet:(id)a1;
- (void)handleEndOfStream;

@end
