@class VUIDebugMetricsEvent;

@interface VUIDebugMetricsEventViewController : UITableViewController

@property (retain, nonatomic) VUIDebugMetricsEvent *event;

- (id)initWithEvent:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)performValidation;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
