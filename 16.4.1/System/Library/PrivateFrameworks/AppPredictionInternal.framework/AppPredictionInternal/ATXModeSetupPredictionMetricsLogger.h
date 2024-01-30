@interface ATXModeSetupPredictionMetricsLogger : NSObject

- (id)init;
- (id)appSessionInterruptionsCalculatorSinceDate:(id)a0 andForModeSemanticTypes:(id)a1;
- (id)fetchAllRelevantModeSemanticTypesInLastSevenDays:(id)a0;
- (id)getRecommendedAndCandidateAppsInAllowListForSemanticTypes:(id)a0;
- (id)getRecommendedAndCandidateAppsInDenyListForSemanticTypes:(id)a0;
- (id)globalAppSessionInterruptionsCalculatorSinceDate:(id)a0;
- (void)logMetrics;

@end
