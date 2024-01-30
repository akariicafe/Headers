@class ATXNotificationAndSuggestionDatastore, ATXDenyListEligibilityThresholds, ATXAppNotificationEngagementEventProvider, ATXAppInterruptionsEventProvider, ATXGlobalAppModeAffinityModel, ATXModeEntityStore, ATXAppModeEntityModelWeights;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXAppModeModel : NSObject {
    unsigned long long _mode;
    ATXModeEntityStore *_modeEntityStore;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXNotificationAndSuggestionDatastore *_notificationDatastore;
    ATXDenyListEligibilityThresholds *_denyListThresholds;
    ATXAppNotificationEngagementEventProvider *_appNotificationEngagementEventProvider;
    ATXAppInterruptionsEventProvider *_appInterruptionsEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
}

- (void).cxx_destruct;
- (void)addGlobalModeAffinityPriorsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (double)scoreFromCorrelationStatistics:(id)a0;
- (void)addAppInterruptingSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addEntitySpecificFeaturesToAppFeatures:(id)a0;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (id)initWithMode:(unsigned long long)a0 modeEntityStore:(id)a1 globalAppModeAffinityModel:(id)a2;
- (id)scoredAppModeEntityWithAppFeatures:(id)a0 bundleId:(id)a1;
- (id)scoredEntities;
- (id)scoredEntitiesForDenyListWithScoresAcrossAllModes:(id)a0;
- (BOOL)shouldSuggestBundleIdForDenyList:(id)a0 scoreInOtherMode:(double)a1 scoreInCurrentMode:(double)a2;

@end
