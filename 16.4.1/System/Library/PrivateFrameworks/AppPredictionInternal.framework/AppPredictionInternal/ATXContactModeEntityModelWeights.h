@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXContactModeEntityModelWeights : NSObject {
    NSDictionary *_contactModeEntityModelWeights;
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

@end
