@class NSArray, NSNumber, NSDate;

@interface ATXModeActivityMetricsLogger : NSObject {
    NSArray *_combinedEvents;
    NSNumber *_startingDNDState;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)logMetrics;
- (void)logMetricsWithXPCActivity:(id)a0;
- (id)_coalesceAppLaunches:(id)a0;
- (BOOL)_shouldCoalesceLaunch:(id)a0 nextLaunch:(id)a1;
- (id)_findStartingDNDStateFromTransitions:(id)a0;
- (void)_populateCombinedEvents:(id)a0;
- (id)initWithAppLaunches:(id)a0 dndTransitions:(id)a1 modeTransitions:(id)a2 notificationEvents:(id)a3 startDate:(id)a4 endDate:(id)a5;
- (BOOL)_eventIsBeforeStartDate:(id)a0;

@end
