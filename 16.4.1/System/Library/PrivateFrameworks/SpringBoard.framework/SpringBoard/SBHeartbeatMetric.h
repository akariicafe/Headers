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

- (id)initWithPersistence:(id)a0;
- (id)calendar;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (BOOL)sendCoreAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (id)dateFormatter;
- (void).cxx_destruct;
- (id)_makePayloadFromMetricsByDatestamp:(id)a0;

@end
