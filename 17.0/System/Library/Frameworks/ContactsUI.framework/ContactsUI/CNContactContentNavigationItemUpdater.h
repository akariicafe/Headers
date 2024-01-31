@class NSArray;

@interface CNContactContentNavigationItemUpdater : NSObject

@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems;
@property (retain, nonatomic) NSArray *extraLeftBarButtonItems;
@property (retain, nonatomic) NSArray *extraRightBarButtonItems;

- (void).cxx_destruct;
- (id)updateEditDoneButtonForController:(id)a0 isUpdatingContact:(BOOL)a1 hasChanges:(BOOL)a2;
- (void)applyPlatterStyleToBarButtonItems:(id)a0 navItemController:(id)a1 isEditing:(BOOL)a2;
- (id)buttonPlatterImage;
- (id)customEditItemTitleForIsUpdatingContact:(BOOL)a0;
- (id)transparentPlatterImage;
- (void)updateBackButtonForPlatterStyleForController:(id)a0 mode:(long long)a1 platterBackBarButtonItem:(id)a2 animated:(BOOL)a3;
- (void)updateDisplayDoneButtonForController:(id)a0 allowsEditing:(BOOL)a1 viewMode:(long long)a2 editButtonEnabled:(BOOL)a3;
- (void)updateDisplayDoneButtonForController:(id)a0 allowsEditing:(BOOL)a1 viewMode:(long long)a2 editRequiresAuthorization:(BOOL)a3;
- (id)updateDisplayNavigationItemsForController:(id)a0 mode:(long long)a1 actionTarget:(id)a2 allowsEditing:(BOOL)a3 editButtonEnabled:(BOOL)a4 isInSheet:(BOOL)a5 isShowingNavBar:(BOOL)a6 shouldShowBackButton:(BOOL)a7 shouldUsePlatterStyle:(BOOL)a8 platterBackBarButtonItem:(id)a9 animated:(BOOL)a10;
- (id)updateDisplayNavigationItemsForController:(id)a0 mode:(long long)a1 actionTarget:(id)a2 allowsEditing:(BOOL)a3 editRequiresAuthorization:(BOOL)a4 isInSheet:(BOOL)a5 isShowingNavBar:(BOOL)a6 shouldShowBackButton:(BOOL)a7 shouldUsePlatterStyle:(BOOL)a8 platterBackBarButtonItem:(id)a9 animated:(BOOL)a10;
- (id)updateEditDoneButtonForController:(id)a0 customEditButtonTitle:(id)a1 hasChanges:(BOOL)a2;
- (id)updateEditingNavigationItemForController:(id)a0 actionTarget:(id)a1 isInSheet:(BOOL)a2 isShowingNavBar:(BOOL)a3 shouldUsePlatterStyle:(BOOL)a4 customEditButtonTitle:(id)a5 hasChanges:(BOOL)a6 animated:(BOOL)a7;
- (id)updateEditingNavigationItemForController:(id)a0 actionTarget:(id)a1 isInSheet:(BOOL)a2 isShowingNavBar:(BOOL)a3 shouldUsePlatterStyle:(BOOL)a4 isUpdatingContact:(BOOL)a5 hasChanges:(BOOL)a6 animated:(BOOL)a7;

@end
