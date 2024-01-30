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

@property (copy, nonatomic) NSDate *initialStartDate;
@property (nonatomic) BOOL savingEnabled;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (void)addButtonTapped:(id)a0;
- (id)defaultMetadata;
- (void)_dataValidated;
- (void)_loadTableViewCellsBySectionIfNecessary;
- (void)_showValidationConfirmAlertWithErrorString:(id)a0;
- (void)_showValidationErrorAlertWithErrorString:(id)a0;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)reloadManualEntryItems;
- (void)reloadManualEntryItemsAndReloadTableView:(BOOL)a0;
- (void)saveHKObjectWithCompletion:(id /* block */)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;
- (void)validateMaximumAllowedDurationFor:(id)a0 endDate:(id)a1 competion:(id /* block */)a2;

@end
