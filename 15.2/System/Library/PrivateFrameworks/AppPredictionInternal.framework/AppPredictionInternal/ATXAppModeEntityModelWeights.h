@class NSDictionary;

@interface ATXAppModeEntityModelWeights : NSObject {
    NSDictionary *_appModeEntityModelWeights;
}

- (void).cxx_destruct;
- (id)init;
- (double)bias;
- (double)classConditionalProbability;
- (double)globalOccurrences;
- (double)globalPopularity;
- (double)posteriorProbability;
- (double)modePopularity;
- (double)appCategoryScore;
- (double)appCategoryScore_v2;
- (double)entityOccurredGloballyOverLastNDays;
- (int)numOfDays;

@end
