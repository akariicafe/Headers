@class EKCalendarColorEditItem;

@interface EKCalendarColorViewController : UITableViewController

@property (retain, nonatomic) EKCalendarColorEditItem *editItem;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)resetBackgroundColor;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
