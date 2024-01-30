@class UITableView, NSString, NSMutableArray, PKGroupsController, PKGroup, PKPass;

@interface PKEditGroupsViewController : PKEditTableViewController <PKGroupsControllerDelegate, PKGroupDelegate, PKEditTableViewControllerCachingDelegate, PKEditGroupViewControllerDelegate> {
    BOOL _editingMode;
    PKGroupsController *_groupsController;
    PKPass *_viewingPass;
    PKGroup *_viewingGroup;
    PKGroup *_deletingGroup;
    UITableView *_tableView;
    NSMutableArray *_actions;
    struct CGSize { double width; double height; } _imageSizeNeeded;
    BOOL _isForWatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)group:(id)a0 didInsertPass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didMovePassFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)group:(id)a0 didRemovePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didUpdatePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didInsertGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didMoveGroup:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)groupsController:(id)a0 didRemoveGroup:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)passExistsWithUniqueIdentifier:(id)a0;
- (void)_showNoPassesViewIfNoGroupsToShow;
- (void)configureCell:(id)a0 atIndexPath:(id)a1 withGroup:(id)a2;
- (id)groupAtIndexPath:(id)a0;
- (void)groupViewController:(id)a0 isDeletingGroup:(id)a1;
- (void)groupsController:(id)a0 didUpdateGroup:(id)a1;
- (id)indexPathForGroup:(id)a0;
- (id)initInEditingMode:(BOOL)a0 existingGroupsController:(id)a1 isForWatch:(BOOL)a2;
- (id)passAtIndexPath:(id)a0;
- (void)prefetchItemsAtIndexPaths:(id)a0;
- (BOOL)shouldShowPreviewForRowAtIndexPath:(id)a0;
- (id)viewControllerForRowAtIndexPath:(id)a0;

@end
