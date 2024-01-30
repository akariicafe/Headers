@class NSArray, NSDictionary;

@interface PXSuggestersDebugViewController : UITableViewController {
    NSArray *_items;
    NSDictionary *_options;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_fetchSuggesters;
- (void)configureCell:(id)a0 withItem:(id)a1;

@end
