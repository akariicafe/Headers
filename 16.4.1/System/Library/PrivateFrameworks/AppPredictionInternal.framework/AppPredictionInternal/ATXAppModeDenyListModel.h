@class ATXNotificationAndSuggestionDatastore, ATXAppInterruptionsEventProvider, ATXAppNotificationEngagementEventProvider, ATXAppModeEntityDenyListModelWeights, ATXModeEntityStore, ATXGlobalInterruptingAppModel;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXAppModeDenyListModel : NSObject {
    unsigned long long _mode;
    ATXModeEntityStore *_modeEntityStore;
    ATXAppModeEntityDenyListModelWeights *_appModeEntityDenyListModelWeights;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXNotificationAndSuggestionDatastore *_notificationDatastore;
    ATXAppNotificationEngagementEventProvider *_appNotificationEngagementEventProvider;
    ATXAppInterruptionsEventProvider *_appInterruptionsEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
}

- (void).cxx_destruct;
- (double)scoreFromCorrelationStatistics:(id)a0;
- (void)addAppInterruptingSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addEntitySpecificFeaturesToAppFeatures:(id)a0;
- (void)addGlobalModeInterruptingPriorsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (id)initWithMode:(unsigned long long)a0 modeEntityStore:(id)a1 globalInterruptingAppModel:(id)a2;
- (id)scoredAppModeEntityWithAppFeatures:(id)a0 bundleId:(id)a1;
- (id)scoredEntities;

@end
