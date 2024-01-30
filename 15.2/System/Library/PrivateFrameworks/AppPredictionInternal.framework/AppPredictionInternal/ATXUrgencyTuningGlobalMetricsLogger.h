@class ATXPETEventTracker2Logger;

@interface ATXUrgencyTuningGlobalMetricsLogger : NSObject {
    ATXPETEventTracker2Logger *_eventTrackerLogger;
}

- (void).cxx_destruct;
- (id)init;
- (void)logUrgencyTuningGlobalMetricsWithXPCActivity:(id)a0;
- (void)logCountForNotificationWithBundleId:(id)a0 isTimeSensitiveNotification:(BOOL)a1 isEngagedTimeSensitiveNotification:(BOOL)a2 count:(double)a3 xpcActivity:(id)a4;
- (void)logUrgencyTuningGlobalMetrics;

@end
