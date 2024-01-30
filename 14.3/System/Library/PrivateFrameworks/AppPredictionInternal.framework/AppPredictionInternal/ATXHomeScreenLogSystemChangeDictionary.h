@class NSMutableDictionary;

@interface ATXHomeScreenLogSystemChangeDictionary : NSObject {
    NSMutableDictionary *_systemChangeDictionary;
}

+ (id)systemChangeDictionaryAccumulatorKeys;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (id)_createNewSystemChangeDictionary;
- (BOOL)_fetchHasHadWidgetsOnHomeScreenUserDefault;
- (void)updateSystemChangeSummaryForHomeScreenPages:(id)a0;
- (void)updateSystemChangeSummaryForHomeScreenEvent:(id)a0;

@end
