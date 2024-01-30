@class NSDate, NSArray, HKHealthStore, HKManualEntryValidationController, HKDisplayType, HKUnitPreferenceController, NSDictionary, HKDateCache;

@interface WDAddDataViewController : HKTableViewController {
    HKDisplayType *_displayType;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitController;
    HKDateCache *_dateCache;
    HKManualEntryValidationController *_validationController;
    NSArray *_tableViewCellsBySection;
    NSDictionary *_manualEntryItems;
}

@property (retain, nonatomic) NSDate *initialStartDate;
@property (nonatomic) BOOL savingEnabled;

- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)numberOfSections;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)addButtonTapped:(id)a0;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (id)defaultMetadata;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)validateMaximumAllowedDurationFor:(id)a0 endDate:(id)a1 competion:(id /* block */)a2;
- (void)reloadManualEntryItemsAndReloadTableView:(BOOL)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;
- (void)saveHKObjectWithCompletion:(id /* block */)a0;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (void)_loadTableViewCellsBySectionIfNecessary;
- (void)_dataValidated;
- (void)_showValidationConfirmAlertWithErrorString:(id)a0;
- (void)_showValidationErrorAlertWithErrorString:(id)a0;
- (void)reloadManualEntryItems;

@end
