@class ATXInformationStore, NSMutableArray, NSMutableDictionary;

@interface ATXHomeScreenLogWidgetSetupDictionaries : NSObject {
    NSMutableArray *_widgetSetupDictionaries;
    NSMutableDictionary *_stackConfigDictionary;
    ATXInformationStore *_informationStore;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (void)_createNewWidgetSetupDictionaryForWidget:(id)a0 stackKind:(unsigned long long)a1 stackLocation:(unsigned long long)a2 rowCoordinate:(long long)a3 columnCoordinate:(long long)a4;
- (void)_createStackConfigStatisticsForWidget:(id)a0 stackKind:(unsigned long long)a1;
- (void)_persistStackConfigStatistics;
- (void)_finalizeWidgetSetupDictionaries;
- (void)_removeAuxiliaryFieldsFromWidgetSetupDictionaries;
- (void)_copyAllowedWidgetBundleIds;
- (void)updateWidgetSetupSummaryForHomeScreenPages:(id)a0;
- (void)updateTotalUnlockSessions:(unsigned long long)a0;
- (void)updateWidgetLevelParentAppLaunches:(id)a0;

@end
