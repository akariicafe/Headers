@interface MenstrualCyclesAppPlugin.InternalSettingsTableViewController : UITableViewController <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ notifications;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ $__lazy_storage_$_store;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
