@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSString;

@interface STAllowanceItemSearchResultsController : UITableViewController <UISearchResultsUpdating>

@property (copy) NSArray *filteredAllowanceItemSpecifiers;
@property BOOL hasNewSelection;
@property (copy) NSOrderedSet *initialWebDomains;
@property (copy) NSOrderedSet *initalBundleIdentifiers;
@property (retain) NSMutableOrderedSet *selectedBundleIdentifiers;
@property (retain) NSMutableOrderedSet *selectedWebDomains;
@property (copy) NSArray *allowanceItemSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;

@end
