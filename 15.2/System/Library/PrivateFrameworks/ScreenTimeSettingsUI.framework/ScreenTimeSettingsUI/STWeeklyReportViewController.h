@class NSArray, STUsageReport, NSLayoutConstraint;

@interface STWeeklyReportViewController : UITableViewController

@property (readonly, nonatomic) STUsageReport *report;
@property (retain, nonatomic) NSArray *tableViewCells;
@property (retain) NSLayoutConstraint *heightConstraint;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)initWithUsageReport:(id)a0;
- (void)_heightDidChange:(id)a0;

@end
