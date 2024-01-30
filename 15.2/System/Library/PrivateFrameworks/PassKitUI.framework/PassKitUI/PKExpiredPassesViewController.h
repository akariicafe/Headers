@class UITableView, NSString, NSArray, NSMutableDictionary, PKGroupsController, UIView, PKPass;
@protocol PKExpiredPassesViewControllerDelegate;

@interface PKExpiredPassesViewController : PKExpiredTableViewController <PKExpiredTableViewControllerCachingDelegate, UIContextMenuInteractionDelegate> {
    BOOL _editingMode;
    struct CGSize { double width; double height; } _imageSizeNeeded;
    PKGroupsController *_groupsController;
    NSArray *_expiredSectionPasses;
    NSMutableDictionary *_locationStringsForPassUniqueIDs;
    PKPass *_viewingPass;
    UITableView *_tableView;
    UIView *_footerView;
    id<PKExpiredPassesViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailTextStringForPass:(id)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)pass;
- (BOOL)contextMenuInteractionShouldBegin:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)removeExpiredSectionPassWithUniqueID:(id)a0 isDeletion:(BOOL)a1;
- (id)initWithExistingGroupsController:(id)a0 delegate:(id)a1;
- (id)_hyperlinkFooterView;
- (void)configureCell:(id)a0 atIndexPath:(id)a1 withPass:(id)a2;
- (id)viewControllerForRowAtIndexPath:(id)a0;
- (void)deletePass:(id)a0 atIndexPath:(id)a1;
- (void)recoverPass:(id)a0 atIndexPath:(id)a1;
- (id)passAtIndexPath:(id)a0;
- (BOOL)passExistsWithUniqueIdentifier:(id)a0;
- (void)prefetchItemsAtIndexPaths:(id)a0;

@end
