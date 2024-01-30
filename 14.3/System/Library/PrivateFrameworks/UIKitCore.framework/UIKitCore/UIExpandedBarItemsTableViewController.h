@class UIBarButtonItemGroup;

@interface UIExpandedBarItemsTableViewController : UITableViewController

@property (readonly, nonatomic) UIBarButtonItemGroup *barButtonGroup;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfItems;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithBarButtonGroup:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (id)_displayTitleForBarButtonItem:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)_visibleItems;
- (void)viewDidLoad;

@end
