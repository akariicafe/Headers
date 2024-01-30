@class NSDictionary;

@interface MultiValuePrefsController : UITableViewController

@property (retain, nonatomic) NSDictionary *menuDict;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setMultiValue:(id)a0;

@end
