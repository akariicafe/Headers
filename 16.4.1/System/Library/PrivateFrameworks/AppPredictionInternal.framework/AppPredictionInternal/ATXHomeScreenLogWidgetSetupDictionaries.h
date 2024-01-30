@class ATXInformationStore, NSMutableArray, NSMutableDictionary;

@interface ATXHomeScreenLogWidgetSetupDictionaries : NSObject {
    NSMutableArray *_widgetSetupDictionaries;
    NSMutableDictionary *_stackConfigDictionary;
    ATXInformationStore *_informationStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (void)_copyAllowedWidgetBundleIds;
- (void)_createNewWidgetSetupDictionaryForWidget:(id)a0 stackKind:(unsigned long long)a1 stackLocation:(unsigned long long)a2 rowCoordinate:(long long)a3 columnCoordinate:(long long)a4;
- (void)_createStackConfigStatisticsForWidget:(id)a0 stackKind:(unsigned long long)a1;
- (void)_finalizeWidgetSetupDictionaries;
- (void)_persistStackConfigStatistics;
- (void)_removeAuxiliaryFieldsFromWidgetSetupDictionaries;
- (id)dryRunResult;
- (void)updateTotalUnlockSessions:(unsigned long long)a0;
- (void)updateWidgetLevelParentAppLaunches:(id)a0;
- (void)updateWidgetSetupSummaryForHomeScreenPages:(id)a0;

@end
