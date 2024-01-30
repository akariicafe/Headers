@class NSArray;

@interface VUIDebugMetricsImpressionViewController : UITableViewController

@property (retain, nonatomic) NSArray *array;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)object;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
