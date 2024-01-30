@class HDHealthRecordsProfileExtension, NSSet, HDClinicalIngestionRequestFailureMetric, NSString, HDClinicalIngestionResponseTimeMetric;

@interface HDClinicalIngestionAnalyticsAccumulator : NSObject

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, copy, nonatomic) NSSet *collectionEnabledCountryCodes;
@property (readonly, nonatomic) HDClinicalIngestionResponseTimeMetric *responseTimes;
@property (readonly, nonatomic) HDClinicalIngestionRequestFailureMetric *requestFailures;
@property (readonly, copy, nonatomic) NSString *analyticsString;

- (id)initWithProfileExtension:(id)a0;
- (void)consumeAndResetIngestionAnalyticsMetricsFromAccumulator:(id)a0;
- (void)resetMetrics;
- (void).cxx_destruct;
- (void)logMetrics;
- (void)accumulateIngestionAnalyticsMetric:(id)a0 gatewayCountryCode:(id)a1;
- (void)submitMetricsWithCoordinator:(id)a0;

@end
