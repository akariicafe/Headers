@class ATXDNDModeConfigurationClient, ATXModeEntityTrialClientWrapper, NSMutableDictionary, ATXGlobalAppModeAffinityModel, ATXAppModeEntityDenyListModelWeights, ATXAppModeEntityModelWeights, ATXGlobalWidgetPopularityModel, ATXTrainDenyListWithDenyListModels, ATXGlobalInterruptingAppModel, ATXModeEntityStore;

@interface ATXFocusModeSignalsMetricLogger : NSObject {
    NSMutableDictionary *_cachedAppScores;
    NSMutableDictionary *_cachedAppScoresForDenyList;
    NSMutableDictionary *_cachedWidgetScores;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
    ATXAppModeEntityDenyListModelWeights *_appModeEntityDenyListModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXGlobalWidgetPopularityModel *_globalWidgetPopularityModel;
    ATXTrainDenyListWithDenyListModels *_trainedDenyListWithDenyListModels;
}

- (id)init;
- (void).cxx_destruct;
- (void)addAppEntitySpecificFeatures:(id)a0 toMetric:(id)a1;
- (id)appScoresForDenyListForMode:(unsigned long long)a0;
- (id)appScoresForMode:(unsigned long long)a0;
- (id)fetchRelevantBundleIdsWithModeConfigurationUIFlowLoggingEvent:(id)a0 suggestedEntities:(id)a1 candidateEntities:(id)a2 currentEntities:(id)a3;
- (void)logFocusModeAppSignalsWithModeConfigurationUIFlowLoggingEvent:(id)a0 xpcActivity:(id)a1;
- (void)logFocusModeWidgetSignalsWithXPCActivity:(id)a0;
- (unsigned long long)logWidgetSignalsForMode:(unsigned long long)a0 modeAffinitySignals:(id)a1 entitiesLogged:(unsigned long long)a2;
- (id)metricFieldsToFeatureNames;
- (void)populateAppModeAffinitySignalsForMode:(unsigned long long)a0 bundleId:(id)a1 metric:(id)a2;
- (void)populateAppModeDenyListSignalsForMode:(unsigned long long)a0 bundleId:(id)a1 metric:(id)a2;
- (void)populateWidgetModeAffinitySignalsForMode:(unsigned long long)a0 metric:(id)a1 modeEntity:(id)a2;
- (BOOL)trainedAppDenyListWithDenyListModel;
- (id)widgetScoresForMode:(unsigned long long)a0;

@end
