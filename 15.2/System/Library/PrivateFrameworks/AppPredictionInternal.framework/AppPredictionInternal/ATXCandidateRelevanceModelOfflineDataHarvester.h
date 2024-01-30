@class NSArray;

@interface ATXCandidateRelevanceModelOfflineDataHarvester : NSObject {
    NSArray *_configs;
}

+ (void)harvestDataUsingConfig:(id)a0;
+ (id)metricsForConfig:(id)a0;
+ (id)candidateMetricsFromConfig:(id)a0;
+ (id)evaluationMetricsFromConfig:(id)a0 startTime:(id)a1 endTime:(id)a2;
+ (id)modelMetricsForConfig:(id)a0;
+ (float)calculateF1ScoreWithPrecision:(float)a0 recall:(float)a1;
+ (unsigned int)daysBetweenStartDate:(id)a0 endDate:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)harvestData;
- (id)initWithConfigs:(id)a0;

@end
