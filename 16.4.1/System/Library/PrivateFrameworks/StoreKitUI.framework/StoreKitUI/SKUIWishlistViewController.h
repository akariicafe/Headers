@class _UIContentUnavailableView, NSString, _UIBackdropView, SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, UIBarButtonItem;
@protocol SKUIWishlistDelegate;

@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate> {
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_deleteButton;
    BOOL _editing;
    _UIContentUnavailableView *_emptyWishlistView;
    SKUIItemListTableViewController *_itemListViewController;
    BOOL _reloadOnNextAppear;
    SKUISyncWishlistOperation *_syncOperation;
    SKUIWishlist *_wishlist;
    long long _wishlistState;
}

@property (weak, nonatomic) id<SKUIWishlistDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wishlistBarButtonItemWithClientContext:(id)a0;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)contentScrollView;
- (void)dealloc;
- (void)setClientContext:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateDeleteButton;
- (void)_doneAction:(id)a0;
- (void)_deleteAction:(id)a0;
- (void)_wishlistDidChangeNotification:(id)a0;
- (void)_reloadWishlist;
- (void)_deleteItemsAtIndexPaths:(id)a0;
- (void)_destroyEmptyWishlistView;
- (id)_emptyWishlistView;
- (void)_finishSignInWithResponse:(id)a0 error:(id)a1;
- (void)_finishSyncWithResult:(BOOL)a0 didChange:(BOOL)a1 error:(id)a2;
- (BOOL)_isEditingEnabled;
- (id)_itemListViewController;
- (void)_reloadChildView;
- (void)_reloadForAccountsChanged;
- (void)_reloadNavigationBarAnimated:(BOOL)a0;
- (void)_signInAction:(id)a0;
- (void)_syncWishlist;
- (void)_toggleEditAction:(id)a0;
- (id)_wishlist;
- (long long)_wishlistState;
- (void)itemList:(id)a0 didDeselectItem:(id)a1 atIndexPath:(id)a2;
- (void)itemList:(id)a0 didRemoveItemAtIndexPath:(id)a1;
- (void)itemList:(id)a0 didSelectItem:(id)a1 atIndexPath:(id)a2;

@end
