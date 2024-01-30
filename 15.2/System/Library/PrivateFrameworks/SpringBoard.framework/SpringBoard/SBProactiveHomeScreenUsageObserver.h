@class ATXHomeScreenPrediction, NSString, SBHIconManager;
@protocol SBProactiveHomeScreenUsageObserverDelegate;

@interface SBProactiveHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver>

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) ATXHomeScreenPrediction *currentPrediction;
@property (weak, nonatomic) id<SBProactiveHomeScreenUsageObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconManager:(id)a0;
- (void)pushCurrentTodayConfiguration;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserDislikedWidgetIconStackSuggestion:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteTodayViewAtLocation:(long long)a1 scrolledWithIconVisibility:(id)a2;
- (void)pushCurrentHomeScreenPagesConfiguration;
- (id)widgetIdentifiablesDictionaryForIconListModel:(id)a0;
- (id)proactiveWidgetForIconDataSource:(id)a0 ofIcon:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)a1;
- (void)pushCurrentDockConfiguration;
- (void)logHomeScreenPageDidAppearWithPageIndex:(unsigned long long)a0;
- (id)proactiveWidgetForWidget:(id)a0 ofIcon:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteCurrentPageIndexChanged:(unsigned long long)a1;
- (void)homeScreenUsageAggregatorDidStartDiscoveringWidgets:(id)a0;
- (void).cxx_destruct;
- (void)homeScreenUsageAggregator:(id)a0 widgetDiscoverabilityDidRejectSuggestion:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserAddedWidgetIconStackSuggestion:(id)a1;
- (void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)a0;
- (void)homeScreenUsageAggregator:(id)a0 didNoteDataSourceDidAppear:(id)a1 forWidgetIcon:(id)a2;
- (id)proactiveStackForWidgetIcon:(id)a0 atIndex:(unsigned long long)a1 gridCellInfo:(id)a2;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconStackChangedActiveWidget:(id)a1;
- (void)pushCurrentHomeScreenConfiguration;
- (void)homeScreenUsageAggregatorWidgetDiscoverabilityDidEnterEditingMode:(id)a0;
- (void)logTodayViewDidAppear;
- (id)rootFolder;
- (void)homeScreenUsageAggregator:(id)a0 didNoteDataSourceDidDisappear:(id)a1 forWidgetIcon:(id)a2;
- (id)iconModel;
- (void)iconModelDidLayout:(id)a0;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 widgetDiscoverabilityDidAcceptSuggestion:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserTappedWidgetIcon:(id)a1 withURL:(id)a2;
- (void)deviceLockStateDidChange:(id)a0;

@end
