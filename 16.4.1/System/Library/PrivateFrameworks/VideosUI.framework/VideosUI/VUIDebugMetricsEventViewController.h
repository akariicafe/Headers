@class VUIDebugMetricsEvent;

@interface VUIDebugMetricsEventViewController : UITableViewController

@property (retain, nonatomic) VUIDebugMetricsEvent *event;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithEvent:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)performValidation;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
