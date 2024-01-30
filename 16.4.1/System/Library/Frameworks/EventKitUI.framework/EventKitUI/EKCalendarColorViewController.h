@class EKCalendarColorEditItem;

@interface EKCalendarColorViewController : UITableViewController

@property (retain, nonatomic) EKCalendarColorEditItem *editItem;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)resetBackgroundColor;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;

@end
