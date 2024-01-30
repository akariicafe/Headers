@interface HealthRecordsUI.SettingsViewController : HKTableViewController <HKClinicalAccountStoreStateChangeListener, HKSourceListDataSourceObserver> {
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ appSourceModels;
    void /* unknown type, empty encoding */ researchStudySourceModels;
    void /* unknown type, empty encoding */ sourceLoadingToken;
    void /* unknown type, empty encoding */ accountLoadingToken;
    void /* unknown type, empty encoding */ factory;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldEnableAddAccounts;
    void /* unknown type, empty encoding */ sourceListDataSource;
}

- (void)sourceListDataSourceDidUpdate:(id)a0;
- (void)closeButtonTapped;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithUsingInsetStyling:(BOOL)a0;
- (void)tapToRadar:(id)a0;
- (void)clinicalAccountStore:(id)a0 accountDidChange:(id)a1 changeType:(long long)a2;

@end
