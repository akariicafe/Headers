@class NSMutableDictionary, ATXDNDModeConfigurationClient;

@interface ATXFocusModeSignalsMetricLogger : NSObject {
    NSMutableDictionary *_cachedAppScores;
    NSMutableDictionary *_cachedWidgetScores;
    ATXDNDModeConfigurationClient *_modeConfigClient;
}

- (void).cxx_destruct;
- (id)init;
- (id)fetchRelevantBundleIdsWithModeConfigurationUIFlowLoggingEvent:(id)a0 suggestedEntities:(id)a1 currentEntities:(id)a2;
- (void)populateAppModeAffinitySignalsForMode:(unsigned long long)a0 bundleId:(id)a1 metric:(id)a2;
- (id)appScoresForMode:(unsigned long long)a0;
- (id)metricFieldsToFeatureNames;
- (id)appCategoryScoreFromFeatureVector:(id)a0;
- (id)widgetScoresForMode:(unsigned long long)a0;
- (unsigned long long)logWidgetSignalsForMode:(unsigned long long)a0 modeAffinitySignals:(id)a1 entitiesLogged:(unsigned long long)a2;
- (void)populateWidgetModeAffinitySignalsForMode:(unsigned long long)a0 metric:(id)a1 modeEntity:(id)a2;
- (void)logFocusModeAppSignalsWithModeConfigurationUIFlowLoggingEvent:(id)a0 xpcActivity:(id)a1;
- (void)logFocusModeWidgetSignalsWithXPCActivity:(id)a0;

@end
