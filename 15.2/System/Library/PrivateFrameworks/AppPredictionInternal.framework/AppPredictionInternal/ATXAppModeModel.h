@class ATXAppModeEntityModelWeights;

@interface ATXAppModeModel : NSObject {
    unsigned long long _mode;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
}

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (double)scoreFromCorrelationStatistics:(id)a0;
- (id)scoredEntities;
- (id)scoredAppModeEntityWithAppFeatures:(id)a0 bundleId:(id)a1;
- (void)addEntitySpecificFeaturesToAppFeatures:(id)a0;

@end
