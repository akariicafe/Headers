@class UIBarButtonItemGroup;

@interface UIExpandedBarItemsTableViewController : UITableViewController

@property (readonly, nonatomic) UIBarButtonItemGroup *barButtonGroup;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_displayTitleForBarButtonItem:(id)a0;
- (unsigned long long)_numberOfItems;
- (id)_visibleItems;
- (id)initWithBarButtonGroup:(id)a0;

@end
