@class NSDictionary;

@interface WFKnownNetworkScoreViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *score;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;

@end
