@class UIContextMenuInteraction, UIAlertController, CNContact, NSString, CNContactActionsController, CNActionMenuHelper;
@protocol CNUIFavoritesEntryPickerDelegate;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (weak, nonatomic) id<CNUIFavoritesEntryPickerDelegate> delegate;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)initWithContact:(id)a0;
- (id)viewController;
- (void).cxx_destruct;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (id /* block */)menuProviderForContextMenuInteraction:(id)a0;

@end
