@class NSArray;

@interface CNContactContentNavigationItemUpdater : NSObject

@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems;
@property (retain, nonatomic) NSArray *extraLeftBarButtonItems;
@property (retain, nonatomic) NSArray *extraRightBarButtonItems;

- (void).cxx_destruct;
- (id)updateEditDoneButtonForController:(id)a0 isUpdatingContact:(BOOL)a1 hasChanges:(BOOL)a2;
- (id)customEditItemTitleForIsUpdatingContact:(BOOL)a0;
- (void)updateDisplayDoneButtonForController:(id)a0 allowsEditing:(BOOL)a1 viewMode:(long long)a2 editButtonEnabled:(BOOL)a3;
- (void)updateDisplayDoneButtonForController:(id)a0 allowsEditing:(BOOL)a1 viewMode:(long long)a2 editRequiresAuthorization:(BOOL)a3;
- (id)updateDisplayNavigationItemsForController:(id)a0 mode:(long long)a1 actionTarget:(id)a2 allowsEditing:(BOOL)a3 editButtonEnabled:(BOOL)a4 isInSheet:(BOOL)a5 animated:(BOOL)a6;
- (id)updateDisplayNavigationItemsForController:(id)a0 mode:(long long)a1 actionTarget:(id)a2 allowsEditing:(BOOL)a3 editRequiresAuthorization:(BOOL)a4 isInSheet:(BOOL)a5 animated:(BOOL)a6;
- (id)updateEditDoneButtonForController:(id)a0 customEditButtonTitle:(id)a1 hasChanges:(BOOL)a2;
- (id)updateEditingNavigationItemForController:(id)a0 actionTarget:(id)a1 isInSheet:(BOOL)a2 customEditButtonTitle:(id)a3 hasChanges:(BOOL)a4 animated:(BOOL)a5;
- (id)updateEditingNavigationItemForController:(id)a0 actionTarget:(id)a1 isInSheet:(BOOL)a2 isUpdatingContact:(BOOL)a3 hasChanges:(BOOL)a4 animated:(BOOL)a5;

@end
