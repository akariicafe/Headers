@class UIColor;
@protocol PKTransitTicketDetailDataSource;

@interface PKTransitTicketDetailViewController : UITableViewController

@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (weak, nonatomic) id<PKTransitTicketDetailDataSource> dataSource;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_applyDefaultStaticStylingToCell:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithTransitTicketDetailDataSource:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
