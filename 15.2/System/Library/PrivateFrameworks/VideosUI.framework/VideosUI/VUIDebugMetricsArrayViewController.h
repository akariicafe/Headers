@class NSDictionary, NSArray;

@interface VUIDebugMetricsArrayViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *cachedKeysOrder;
@property (retain, nonatomic) NSArray *array;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)object;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)generateCachedKeys;

@end
