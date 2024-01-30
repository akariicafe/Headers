@interface MenstrualCyclesAppPlugin.AddCycleFactorTableViewController : UITableViewController {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addBarButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelBarButton;
    void /* unknown type, empty encoding */ currentlySelectedFactorRow;
    void /* unknown type, empty encoding */ factorTypeSelected;
    void /* unknown type, empty encoding */ currentlySelectedDateRangeRow;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ factorTypeRows;
    void /* unknown type, empty encoding */ dateRangeRows;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ startDateLocked;
    void /* unknown type, empty encoding */ launchSource;
    void /* unknown type, empty encoding */ manualEntryItemContraceptive;
    void /* unknown type, empty encoding */ contraceptiveDataSource;
}

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)cancelAndDismiss;
- (void)saveNewFactorAndDismiss;

@end
