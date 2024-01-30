@class NSArray, NSString;
@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating>

@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSArray *allPlugins;
@property (weak, nonatomic) id<CKBrowserAppManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)searchEnded;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
