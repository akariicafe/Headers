@class WDProfile, NSArray, NSString, UITableView;

@interface WDTableViewController : HKTableViewController <WDTableViewSectionDelegate>

@property (readonly, nonatomic) NSArray *tableSections;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableViewSectionClasses;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)applicationWillEnterForeground;
- (void)reloadSection:(unsigned long long)a0 animated:(BOOL)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)applicationDidEnterBackground;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)_addObservers;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (id)indexPathForCell:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)pushViewController:(id)a0;
- (void)reloadTable;
- (id)_section:(long long)a0;
- (id)_sectionAtIndexPath:(id)a0;
- (void)sectionAddedChildViewController:(id)a0;

@end
