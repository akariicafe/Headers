@class NSArray;

@interface ATXCandidateRelevanceModelOfflineDataHarvester : NSObject {
    NSArray *_configs;
}

+ (float)calculateF1ScoreWithPrecision:(float)a0 recall:(float)a1;
+ (id)candidateMetricsFromConfig:(id)a0;
+ (unsigned int)daysBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)evaluationMetricsFromConfig:(id)a0 startTime:(id)a1 endTime:(id)a2;
+ (void)harvestDataUsingConfig:(id)a0;
+ (id)metricsForConfig:(id)a0;
+ (id)modelMetricsForConfig:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)harvestData;
- (id)initWithConfigs:(id)a0;

@end
