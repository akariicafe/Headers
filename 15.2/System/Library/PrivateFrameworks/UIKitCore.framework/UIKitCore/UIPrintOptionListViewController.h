@class NSArray;
@protocol UIPrintOptionListDelegate;

@interface UIPrintOptionListViewController : UITableViewController

@property (weak, nonatomic) id<UIPrintOptionListDelegate> listDelegate;
@property (retain, nonatomic) NSArray *itemList;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithListDelegate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
