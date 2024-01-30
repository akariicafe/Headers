@class ATXModeDimensionSet, _ATXAppLaunch, NSMutableDictionary, NSMutableArray;

@interface ATXInterruptedAppSessionAccumulator : NSObject {
    _ATXAppLaunch *_previousLaunch;
    ATXModeDimensionSet *_previousDimensions;
    NSMutableArray *_appSessions;
    NSMutableDictionary *_summaryMetrics;
    NSMutableDictionary *_recentNotifications;
}

- (void)handleNotificationEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)logToCoreAnalytics;
- (unsigned long long)numberOfInterruptingAppSessions;
- (id)_getSummaryMetricForDimensions:(id)a0;
- (BOOL)_doesLaunchInterruptPreviousLaunch:(id)a0;
- (id)countedSetContainingInterruptingAppBundleIds;
- (void)handleEndOfStream;
- (void)handleNextAppLaunch:(id)a0 dimensionSet:(id)a1;

@end
