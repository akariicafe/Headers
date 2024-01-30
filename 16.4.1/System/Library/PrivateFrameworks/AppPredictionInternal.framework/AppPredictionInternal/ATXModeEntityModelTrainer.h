@class ATXTrainDenyListWithDenyListModels, NSString, ATXGlobalWidgetPopularityModel, ATXGlobalAppModeAffinityModel, ATXModeEntityStore, ATXGlobalInterruptingAppModel;

@interface ATXModeEntityModelTrainer : NSObject {
    NSString *_cacheBasePath;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXTrainDenyListWithDenyListModels *_trainDenyListWithDenyListModels;
    ATXGlobalWidgetPopularityModel *_globalWidgetPopularityModel;
}

+ (id)thresholdedModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 threshold:(double)a2;
+ (id)eventProviderForMode:(unsigned long long)a0;
+ (id)eventProviderForScorableTime:(id)a0;
+ (double)maxScoreWithThresholdGivenModeEntityScores:(id)a0;
+ (double)scoreThresholdGivenModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 modeConfigurationType:(long long)a2;

- (void)train;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (id)init;
- (void)trainWithXPCActivity:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldDeferTrainingDueToUpgrade;
- (id)initWithCacheBasePath:(id)a0 modeEntityStore:(id)a1 globalAppModeAffinityModel:(id)a2 globalInterruptingAppModel:(id)a3 globalWidgetPopularityModel:(id)a4;
- (BOOL)persistModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 modeIdentifier:(id)a2 modeConfigurationType:(long long)a3;
- (BOOL)shouldDeferTrainingDueToRestoredBackup;
- (BOOL)shouldTrainWithAppModeEntityDenyListModel;
- (BOOL)shouldTrainWithContactModeEntityDenyListModel;
- (void)trainModeAffinityModelsForDenyListWithModeAffinityScoresForApps:(id)a0 scoresForContacts:(id)a1 xpcActivity:(id)a2;
- (void)trainModeEntityDenyListModels:(id)a0 shouldTrainAppDenyListModel:(BOOL)a1 shouldTrainContactDenyListModel:(BOOL)a2 shouldSkipRetrainingIfTrainedRecently:(BOOL)a3;
- (void)trainWithShouldDeferTrainingOnBackupRestoreOrUpgrade:(BOOL)a0;
- (void)trainWithXPCActivity:(id)a0 shouldSkipRetrainingIfTrainedRecently:(BOOL)a1 shouldDeferTrainingOnRestoreOrUpgrade:(BOOL)a2;

@end
