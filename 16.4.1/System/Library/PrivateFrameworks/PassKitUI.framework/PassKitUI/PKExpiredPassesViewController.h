@class UIView, NSString, NSArray, PKGroupsController, PKPass, NSMutableDictionary, UITableView, UIBarButtonItem, UILabel;
@protocol PKExpiredPassesViewControllerDelegate;

@interface PKExpiredPassesViewController : PKExpiredTableViewController <PKExpiredTableViewControllerCachingDelegate> {
    PKGroupsController *_groupsController;
    NSArray *_expiredSectionPasses;
    NSMutableDictionary *_locationStringsForPassUniqueIDs;
    PKPass *_viewingPass;
    UITableView *_tableView;
    UIView *_footerView;
    id<PKExpiredPassesViewControllerDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_cancelButton;
    long long _currentEditingStyle;
    UILabel *_selectedPassesLabel;
    long long _selectedPassesCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailTextStringForPass:(id)a0;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)_cancel;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)pass;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_select;
- (void)_done;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 willDeselectRowAtIndexPath:(id)a1;
- (BOOL)passExistsWithUniqueIdentifier:(id)a0;
- (void)_applyDeletionOrRecovery;
- (void)_deletePassPressed;
- (void)_edit;
- (id)_hyperlinkFooterView;
- (void)_recoverPassPressed;
- (id)_selectedExpiredPassesString;
- (void)_updateSelectedPassesText;
- (void)_updateTitles;
- (void)configureCell:(id)a0 atIndexPath:(id)a1 withPass:(id)a2;
- (void)deletePass:(id)a0 atIndexPath:(id)a1;
- (id)initWithExistingGroupsController:(id)a0 delegate:(id)a1;
- (id)passAtIndexPath:(id)a0;
- (void)prefetchItemsAtIndexPaths:(id)a0;
- (void)recoverPass:(id)a0 atIndexPath:(id)a1;
- (void)removeExpiredSectionPassWithUniqueID:(id)a0 isDeletion:(BOOL)a1;
- (void)tableViewDidUpdateSelection:(id)a0;
- (id)viewControllerForRowAtIndexPath:(id)a0;

@end
