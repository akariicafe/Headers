@class ATXStableContactRepresentationDatastore, NSMutableDictionary, ATXDNDModeConfigurationClient, ATXContactModeEntityModelWeights, ATXModeEntityTrialClientWrapper, ATXContactModeEntityDenyListModelWeights, ATXTrainDenyListWithDenyListModels;

@interface ATXFocusModeContactsMetricLogger : NSObject {
    NSMutableDictionary *_cachedContactScores;
    NSMutableDictionary *_cachedContactScoresForDenyList;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
    ATXContactModeEntityModelWeights *_contactModeEntityModelWeights;
    ATXContactModeEntityDenyListModelWeights *_contactModeEntityDenyListModelWeights;
    ATXTrainDenyListWithDenyListModels *_trainedDenyListWithDenyListModels;
    ATXStableContactRepresentationDatastore *_stableContactRepresentationDatastore;
}

- (id)init;
- (BOOL)trainedContactDenyListWithDenyListModel;
- (void).cxx_destruct;
- (void)addContactEntitySpecificFeatures:(id)a0 toMetric:(id)a1;
- (id)contactScoresForDenyListForMode:(unsigned long long)a0;
- (id)contactScoresForMode:(unsigned long long)a0;
- (id)fetchRelevantContactIdsWithModeConfigurationUIFlowLoggingEvent:(id)a0 suggestedEntities:(id)a1 candidateEntities:(id)a2 currentEntities:(id)a3;
- (void)logFocusModeContactSignalsWithModeConfigurationUIFlowLoggingEvent:(id)a0 xpcActivity:(id)a1;
- (id)metricFieldsToFeatureNames;
- (void)populateContactModeAffinitySignalsForMode:(unsigned long long)a0 contactId:(id)a1 metric:(id)a2;
- (void)populateContactModeDenyListSignalsForMode:(unsigned long long)a0 contactId:(id)a1 metric:(id)a2;

@end
