@class HUGridLayoutOptions, NSString, HURoomListItemManager;
@protocol HURoomListViewControllerDelegate;

@interface HURoomListViewController : HUItemTableViewController <HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate>

@property (readonly, nonatomic) HURoomListItemManager *itemManager;
@property (weak, nonatomic) id<HURoomListViewControllerDelegate> delegate;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)_doneButtonPressed:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_addButtonPressed:(id)a0;
- (void)_editButtonPressed:(id)a0;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didInsertItem:(id)a1 atIndexPath:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)initWithHome:(id)a0 delegate:(id)a1 layoutOptions:(id)a2;
- (id)_reorderableRoomItems;
- (void)_saveItemOrder:(id)a0 forSection:(long long)a1 resort:(BOOL)a2;
- (id)_reorderableHomeKitItemListForSection:(long long)a0;
- (void)_setReorderableHomeKitItemList:(id)a0 forSection:(long long)a1;
- (void)editRoomViewControllerDidFinish:(id)a0 withNewRoom:(id)a1;
- (void)presentAddRoomViewControllerForEditRoomViewController:(id)a0;
- (BOOL)automaticallyUpdatesViewControllerTitle;

@end
