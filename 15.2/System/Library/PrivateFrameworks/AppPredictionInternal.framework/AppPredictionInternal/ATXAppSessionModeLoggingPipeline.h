@class BPSPublisher, NSString;

@interface ATXAppSessionModeLoggingPipeline : NSObject {
    double _lastEventTimestamp;
    unsigned long long _lastActivityType;
}

@property (readonly, nonatomic) BPSPublisher *modeTransitionPublisher;
@property (readonly, nonatomic) BPSPublisher *appLaunchPublisher;
@property (readonly, nonatomic) BPSPublisher *notificationEventPublisher;
@property (readonly, nonatomic) NSString *bookmarkFilepath;

- (void).cxx_destruct;
- (id)init;
- (void)persistState;
- (double)lastPipelineRunTimestampFromStore;
- (unsigned long long)lastKnownActivityFromStore;
- (id)_appLaunchesSinceDate:(id)a0;
- (id)_stripStoreEvent:(id)a0;
- (id)initWithModeTransitionPublisher:(id)a0 appLaunchPublisher:(id)a1 notificationEventPublisher:(id)a2 lastEventTimestamp:(double)a3 lastActivityType:(unsigned long long)a4;
- (id)_coalesceAppLaunches:(id)a0;
- (BOOL)_shouldCoalesceLaunch:(id)a0 nextLaunch:(id)a1;
- (id)timeMergedPublisherFromEventPublishers:(id)a0 modeTransitionPublisher:(id)a1;
- (void)logAppSessionMetricsWithXPCActivity:(id)a0;
- (void)logAppSessionMetrics;

@end
