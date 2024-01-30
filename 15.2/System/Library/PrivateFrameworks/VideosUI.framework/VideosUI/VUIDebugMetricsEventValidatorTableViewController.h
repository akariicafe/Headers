@class NSDictionary, NSArray;

@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *event;
@property (retain, nonatomic) NSArray *results;

- (id)initWithEvent:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_reloadResults:(id)a0;

@end
