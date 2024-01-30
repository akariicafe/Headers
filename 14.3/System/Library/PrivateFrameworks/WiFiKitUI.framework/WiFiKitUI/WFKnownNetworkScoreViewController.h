@class NSDictionary;

@interface WFKnownNetworkScoreViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *score;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
