@class NSString, PBCodable;
@protocol WFAWDWiFiUIScanSessionMetric;

@interface WFScanSessionEvent : NSObject <WFAWDEvent>

@property (retain, nonatomic) PBCodable<WFAWDWiFiUIScanSessionMetric> *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scanSessionEventWithSectionCounts:(id)a0 duration:(double)a1;

- (void).cxx_destruct;
- (unsigned int)metricIdentifier;
- (id)initWithScanSectionCounts:(id)a0 duration:(double)a1;
- (unsigned long long)_durationBucketFromTimeInterval:(double)a0;
- (id)_countMetricsFromSectionCounts:(id)a0;

@end
