@class SFContactAutoFillPropertyValues;

@interface SFContactAutoFillDetailViewController : UITableViewController {
    SFContactAutoFillPropertyValues *_propertyValues;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithPropertyValues:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
