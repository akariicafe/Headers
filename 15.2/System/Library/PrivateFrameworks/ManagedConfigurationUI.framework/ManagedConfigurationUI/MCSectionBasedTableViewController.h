@class NSArray, NSString, MCSectionBasedTableView;

@interface MCSectionBasedTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MCSectionBasedTableView *sectionBasedTableView;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)defaultView;
- (void)_registerCellClass;

@end
