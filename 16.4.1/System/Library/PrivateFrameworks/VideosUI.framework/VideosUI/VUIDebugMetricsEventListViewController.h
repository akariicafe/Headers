@class NSArray;

@interface VUIDebugMetricsEventListViewController : UITableViewController

@property (retain, nonatomic) NSArray *visibleEvents;
@property (retain, nonatomic) NSArray *allEvents;
@property (retain, nonatomic) NSArray *buttonsInHeader;
@property (retain, nonatomic) NSArray *buttonsInHeaderSelected;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithEvents:(id)a0;
- (void)_buttonClicked:(id)a0;
- (id)_formatKeyAndValue:(id)a0 fromEvent:(id)a1;
- (id)_imageFromPageContext:(id)a0;
- (void)finishValidation;
- (void)toggleValidationMode;

@end
