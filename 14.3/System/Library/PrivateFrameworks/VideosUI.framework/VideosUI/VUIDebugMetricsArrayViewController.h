@class NSDictionary, NSArray;

@interface VUIDebugMetricsArrayViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *cachedKeysOrder;
@property (retain, nonatomic) NSArray *array;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (id)object;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)generateCachedKeys;

@end
