@class ATXSuggestedPagesWidgetAggregator, NSSet, NSDictionary, ATXSuggestedPagesAppAggregator, ATXSuggestedPagesSleepShortcutsDataSource, ATXSuggestedPagesTunableConstants;

@interface ATXSuggestedPagesGenerator : NSObject <ATXSuggestedSpacesEnvironment> {
    ATXSuggestedPagesWidgetAggregator *_widgetAggregator;
    ATXSuggestedPagesAppAggregator *_appAggregator;
    ATXSuggestedPagesSleepShortcutsDataSource *_shortcutsDataSource;
    unsigned long long _cachedHomeScreenRows;
    unsigned long long _cachedHomeScreenColumns;
}

@property (readonly, nonatomic) NSDictionary *appLaunchCounts;
@property (readonly, nonatomic) NSSet *suggestedApps;
@property (readonly, nonatomic) ATXSuggestedPagesTunableConstants *tunableConstants;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_suggestAppsFromPool:(id)a0 forPage:(id)a1 type:(long long)a2 numberOfAppsNecessary:(unsigned long long)a3;
- (unsigned long long)_suggestShortcutsFromPool:(id)a0 forPage:(id)a1 type:(long long)a2 numberOfShortcutsNecessary:(unsigned long long)a3;
- (unsigned long long)_suggestStacksFromPool:(id)a0 forPage:(id)a1 type:(long long)a2 layout:(id)a3 numberOfColumns:(unsigned long long)a4;
- (id)_validatedWidgets:(id)a0 bundleIdsToLaunches:(id)a1;
- (id)generateSuggestedPagesForPageType:(long long)a0 layoutOptions:(id)a1;
- (id)initWithWidgetAggregator:(id)a0 appAggregator:(id)a1 shortcutsDataSource:(id)a2;

@end
