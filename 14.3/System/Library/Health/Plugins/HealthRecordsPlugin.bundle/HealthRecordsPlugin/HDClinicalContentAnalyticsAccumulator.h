@class HDClinicalContentAnalyticsUnknownRecordsMetric;

@interface HDClinicalContentAnalyticsAccumulator : NSObject

@property (readonly, nonatomic) HDClinicalContentAnalyticsUnknownRecordsMetric *unknownRecordsMetric;
@property (readonly, nonatomic) long long batchCount;

- (void)resetMetrics;
- (id)init;
- (void).cxx_destruct;
- (id)analyticsString;
- (void)incrementBatchCount;
- (id)debugDescription;
- (void)submitMetricsWithCoordinator:(id)a0;
- (void)accumulateMetricsForItem:(id)a0;

@end
