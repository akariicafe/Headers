@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider;

- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)a0;
- (void)loadView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
