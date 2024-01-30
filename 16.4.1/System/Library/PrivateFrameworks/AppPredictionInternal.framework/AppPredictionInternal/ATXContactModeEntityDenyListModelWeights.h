@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXContactModeEntityDenyListModelWeights : NSObject {
    NSDictionary *_contactModeEntityDenyListModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (double)bias;
- (id)abGroup;
- (double)isFavorite;
- (id)init;
- (void).cxx_destruct;
- (double)isVIP;
- (double)classConditionalProbability;
- (double)entityOccurredGloballyOverLastNDays;
- (double)globalPopularity;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)ratioModeAndGlobalPopularity;

@end
