@class NSString, NSDictionary, PBCodable, NSNumber;

@interface PearlCoreAnalyticsEvent : BiometricKitCoreAnalyticsEvent {
    PBCodable *_awdMetric;
    NSDictionary *_awdMetricDictionary;
    NSString *_awdMetricName;
    NSNumber *_awdMetricId;
    NSDictionary *_eventDictionary;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)reset;
- (id)getEventDictionary;
- (void)logAnalyticsDictionary:(id)a0;
- (BOOL)postEvent;
- (id)getAWDMetric;
- (id)initWithName:(id)a0 awdMetric:(id)a1;
- (void)prepareEventDictionary;
- (BOOL)postAWDMetric;

@end
