@interface MenstrualCyclesAppPlugin.EditCycleFactorTableViewController : UITableViewController {
    void /* unknown type, empty encoding */ factorSample;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ launchSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelBarButtonItem;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ dateRows;
    void /* unknown type, empty encoding */ deleteRows;
    void /* unknown type, empty encoding */ nanoSyncControl;
}

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)cancelAndDismiss;
- (void)doneSaveAndDismiss;

@end
