@class NSString, NSDictionary, PBCodable, NSNumber;

@interface PearlCoreAnalyticsEvent : BiometricKitCoreAnalyticsEvent {
    PBCodable *_awdMetric;
    NSDictionary *_awdMetricDictionary;
    NSString *_awdMetricName;
    NSNumber *_awdMetricId;
    NSDictionary *_eventDictionary;
}

- (void)prepareEventDictionary;
- (id)initWithName:(id)a0;
- (BOOL)postAWDMetric;
- (id)initWithName:(id)a0 awdMetric:(id)a1;
- (id)getAWDMetric;
- (void)logAnalyticsDictionary:(id)a0;
- (BOOL)postEvent;
- (id)getEventDictionary;
- (void).cxx_destruct;
- (void)reset;

@end
