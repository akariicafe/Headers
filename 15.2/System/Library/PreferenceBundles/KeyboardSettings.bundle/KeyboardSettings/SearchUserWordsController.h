@class UINavigationController, NSArray, NSString, TIUserWordsManager;

@interface SearchUserWordsController : UITableViewController <UISearchResultsUpdating>

@property (retain, nonatomic) NSArray *filteredListContent;
@property (retain, nonatomic) NSArray *noResults;
@property (retain, nonatomic) UINavigationController *parentNavigationController;
@property (retain, nonatomic) TIUserWordsManager *dictionaryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithNavigationController:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)filterContentForSearchText:(id)a0;

@end
