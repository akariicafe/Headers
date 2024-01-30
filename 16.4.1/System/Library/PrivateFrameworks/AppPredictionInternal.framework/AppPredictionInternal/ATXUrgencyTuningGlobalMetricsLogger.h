@class ATXPETEventTracker2Logger;

@interface ATXUrgencyTuningGlobalMetricsLogger : NSObject {
    ATXPETEventTracker2Logger *_eventTrackerLogger;
}

- (id)init;
- (void).cxx_destruct;
- (void)logCountForNotificationWithBundleId:(id)a0 isTimeSensitiveNotification:(BOOL)a1 isEngagedTimeSensitiveNotification:(BOOL)a2 count:(double)a3 xpcActivity:(id)a4;
- (void)logUrgencyTuningGlobalMetrics;
- (void)logUrgencyTuningGlobalMetricsWithXPCActivity:(id)a0;

@end
