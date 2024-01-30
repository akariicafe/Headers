@class UIFont, NSArray, HKHealthStore, NSMutableDictionary, HKAuthorizationStore, HKDisplayType, HKSample, HKTitledIconHeaderView;

@interface HKObjectDataAccessViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {
    HKHealthStore *_healthStore;
    HKAuthorizationStore *_authorizationStore;
    HKSample *_sample;
    NSMutableDictionary *_authorizationByApp;
    NSArray *_orderedApps;
    UIFont *_bodyFont;
    HKDisplayType *_displayType;
    HKTitledIconHeaderView *_headerView;
}

- (void)_applicationWillEnterForeground:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)bodyFont;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_headerSubtitle;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 tableView:(id)a3 fetchError:(id)a4;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (id)_cellForSource:(id)a0 tableView:(id)a1;
- (void)_loadIconForSource:(id)a0 onCell:(id)a1 ofTableView:(id)a2;
- (id)_noAppsCell;
- (void)_refreshAppAuthorizationData;
- (void)_setupHeaderViewSize;
- (id)initWithSample:(id)a0 healthStore:(id)a1;

@end
