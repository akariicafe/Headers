@class NSString, NSCalendar, NSISO8601DateFormatter, SBHeartbeatMetricPersistence;

@interface SBHeartbeatMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    NSCalendar *_calendar;
    NSISO8601DateFormatter *_dateFormatter;
}

@property (readonly, nonatomic) SBHeartbeatMetricPersistence *heartbeatMetricPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)calendar;
- (id)dateFormatter;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (BOOL)sendCoreAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0;
- (id)_makePayloadFromMetricsByDatestamp:(id)a0;

@end
