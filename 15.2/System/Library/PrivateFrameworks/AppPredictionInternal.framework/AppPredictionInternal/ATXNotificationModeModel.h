@class ATXModeEntityModelTrainingContext;

@interface ATXNotificationModeModel : NSObject {
    unsigned long long _mode;
    ATXModeEntityModelTrainingContext *_trainingContext;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMode:(unsigned long long)a0 trainingContext:(id)a1;
- (id)scoredEntitiesWithScoredAppEntities:(id)a0 scoredContactEntities:(id)a1;
- (id)modeEntityScoreFromEngagementFeatures:(id)a0 dismissalFeatures:(id)a1 hiddenFeatures:(id)a2 clearedFeatures:(id)a3 expiredFeatures:(id)a4 scoredApp:(id)a5 scoredContact:(id)a6;
- (double)scoreFromEngagementFeatures:(id)a0 dismissalFeatures:(id)a1 hiddenFeatures:(id)a2 clearedFeatures:(id)a3 expiredFeatures:(id)a4 scoredApp:(id)a5 scoredContact:(id)a6;
- (void)addSubFeaturesToFeatureDict:(id)a0 subFeatures:(id)a1 prefix:(id)a2;

@end
