@class UITableView, NSArray, NSString, CKAppSearchResultsTableViewController, UIBarButtonItem, UISearchController;
@protocol CKAppManagerViewControllerDelegate;

@interface CKAppManagerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAppManagerAppTableViewCellDelegate, UISearchControllerDelegate, UISearchBarDelegate> {
    UITableView *_tableView;
    UIBarButtonItem *_dismissButton;
}

@property (weak, nonatomic) id<CKAppManagerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *favoritePlugins;
@property (retain, nonatomic) NSArray *plugins;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) CKAppSearchResultsTableViewController *searchResultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDismissSearchController:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)searchBarTextDidEndEditing:(id)a0;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)appCell:(id)a0 wasToggledOn:(BOOL)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (void)updateEditDoneButton;
- (id)balloonPluginManager;
- (void)doneButtonTapped:(id)a0;
- (BOOL)allowEnablingDisabledApps;
- (void)reloadPluginsImmediately;
- (BOOL)togglePluginAtIndex:(unsigned long long)a0 enabled:(BOOL)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
