@class NSString, HKDisplayType, WDProfile;
@protocol WDDataListViewControllerDataProvider;

@interface WDHeartEventOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, WDUserActivityResponder> {
    HKDisplayType *_displayType;
    WDProfile *_profile;
    id<WDDataListViewControllerDataProvider> _dataProvider;
    long long _visibleSampleCount;
    long long _totalSampleCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (void)_reloadAllData;
- (void)_updateActivityForViewDidAppear;
- (void)_recomputeTotalSampleCount;
- (BOOL)_isDisplayTypeFavorited;
- (BOOL)_doesActiveWatchSupportHeartRateMotionContexts;
- (void)_addActivityForAction:(long long)a0 newResponder:(id)a1;
- (id)_heartEventType;
- (id)_cellForShowAll;
- (id)_cellForSampleAtIndexPath:(id)a0;
- (id)_cellForFavoriteSwitch;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForDescription;
- (id)_pushShowAllViewController;
- (void)_pushSampleDetailViewControllerForIndexPath:(id)a0;
- (id)_pushDataSourcesAndAccessController;

@end
