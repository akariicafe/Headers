@class BPSPublisher, NSString;

@interface ATXAppSessionModeLoggingPipeline : NSObject {
    double _lastEventTimestamp;
    unsigned long long _lastActivityType;
}

@property (readonly, nonatomic) BPSPublisher *modeTransitionPublisher;
@property (readonly, nonatomic) BPSPublisher *appLaunchPublisher;
@property (readonly, nonatomic) BPSPublisher *notificationEventPublisher;
@property (readonly, nonatomic) NSString *bookmarkFilepath;

- (void)persistState;
- (id)init;
- (void).cxx_destruct;
- (id)timeMergedPublisherFromEventPublishers:(id)a0 modeTransitionPublisher:(id)a1;
- (id)initWithModeTransitionPublisher:(id)a0 appLaunchPublisher:(id)a1 notificationEventPublisher:(id)a2 lastEventTimestamp:(double)a3 lastActivityType:(unsigned long long)a4;
- (unsigned long long)lastKnownActivityFromStore;
- (double)lastPipelineRunTimestampFromStore;
- (void)logAppSessionMetrics;
- (void)logAppSessionMetricsWithXPCActivity:(id)a0;

@end
