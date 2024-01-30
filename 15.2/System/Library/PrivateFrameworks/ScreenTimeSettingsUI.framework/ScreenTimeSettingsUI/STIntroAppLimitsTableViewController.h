@class NSDateComponentsFormatter, STAllowance;

@interface STIntroAppLimitsTableViewController : UITableViewController

@property BOOL showingAllCategories;
@property BOOL showingDatePicker;
@property (readonly) NSDateComponentsFormatter *timeAmountFormatter;
@property (readonly) STAllowance *allowance;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_datePickerChanged:(id)a0;
- (void)_stIntroAppLimitsTableViewControllerCommonInit;
- (id)_selectedCategories;

@end
