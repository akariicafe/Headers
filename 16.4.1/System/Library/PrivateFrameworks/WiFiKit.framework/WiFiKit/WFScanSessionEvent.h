@class NSString, PBCodable, NSDictionary;
@protocol WFAWDWiFiUIScanSessionMetric;

@interface WFScanSessionEvent : NSObject <WFUIEvent>

@property (retain, nonatomic) PBCodable<WFAWDWiFiUIScanSessionMetric> *metric;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scanSessionEventWithSectionCounts:(id)a0 duration:(double)a1;

- (void).cxx_destruct;
- (unsigned int)metricIdentifier;
- (id)_countMetricsFromSectionCounts:(id)a0;
- (unsigned long long)_durationBucketFromTimeInterval:(double)a0;
- (id)_sectionCountsToJSONString:(id)a0;
- (id)initWithScanSectionCounts:(id)a0 duration:(double)a1;

@end
