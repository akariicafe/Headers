@class NSArray, NSDictionary;

@interface PXSuggestersDebugViewController : UITableViewController {
    NSArray *_items;
    NSDictionary *_options;
}

- (id)initWithOptions:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)configureCell:(id)a0 withItem:(id)a1;
- (void)viewDidLoad;
- (void)_fetchSuggesters;

@end
