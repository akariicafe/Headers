@class TableViewManager, UITableView;
@protocol TableViewManagerDelegate;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) TableViewManager *tableManager;
@property (nonatomic) id<TableViewManagerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)setTableView:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)initAUUITableViewControllerCommon;

@end
