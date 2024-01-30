@class NSArray, NSDictionary;

@interface PXSuggestersDebugViewController : UITableViewController {
    NSArray *_items;
    NSDictionary *_options;
}

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)configureCell:(id)a0 withItem:(id)a1;
- (void)_fetchSuggesters;

@end
