@class NSDictionary;

@interface VUIDebugMetricsDictionaryViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *dictionary;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithDictionary:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)sortedKeys;

@end
