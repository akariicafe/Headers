@class UIBarButtonItemGroup;

@interface UIExpandedBarItemsTableViewController : UITableViewController

@property (readonly, nonatomic) UIBarButtonItemGroup *barButtonGroup;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)_visibleItems;
- (id)_displayTitleForBarButtonItem:(id)a0;
- (unsigned long long)_numberOfItems;
- (id)initWithBarButtonGroup:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
