@class UIFont, NSSet, NSArray, HKDisplayType, HKUnitPreferenceController, UIBarButtonItem;

@interface WDUnitPreferenceViewController : HKTableViewController {
    NSSet *_units;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    NSArray *_rows;
    long long _selectedRowIndex;
    long long _originalSelectedRowIndex;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (nonatomic) BOOL requiresChangeConfirmation;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_cancelButtonTapped:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_doneButtonTapped:(id)a0;
- (id)_sortedUnitPreferenceRows;
- (void)_updateCurrentUnit:(id)a0;
- (id)initWithUnits:(id)a0 displayType:(id)a1 unitController:(id)a2;

@end
