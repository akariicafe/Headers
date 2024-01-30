@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider;

- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)loadView;
- (void)viewDidLoad;

@end
