@class NSString, NSArray, UIBarButtonItem;

@interface SafariSavedCreditCardsController : SafariAutoFillListController <_SFSettingsAuthenticationRequiring> {
    NSArray *_specifiersForAddItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    NSArray *_virtualCards;
    NSArray *_specifiersForVirtualCardSection;
}

@property (readonly, copy, nonatomic) NSString *authenticationPrompt;
@property (readonly, nonatomic) BOOL showsAuthenticationPromptAsTitle;
@property (nonatomic) BOOL hasBeenAuthenticated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)_addItem:(id)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateEditButton;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (id)_cancelBarButtonItem;
- (id)_deleteBarButtonItem;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_editBarButtonItem;
- (void)_cancelEditing;
- (void)_updateDeleteButton;
- (void)_deleteButtonTapped;
- (void)_showEditBarButtonItemAnimated:(BOOL)a0;
- (id)_specifiersForVirtualCardSection;
- (id)titleForAddItem;
- (Class)controllerClassForAddItem;
- (id)_specifiersForAddItem;
- (void)_createVirtualCardSectionSpecifiers;
- (id)_specifiersToAddOrRemoveWhenTogglingEditButton;
- (void)_toggleEditing;
- (unsigned long long)_autoFillItemCount;
- (id)deleteConfirmationTitle;
- (id)deleteConfirmationMessage;
- (void)_deleteSelectedItems;
- (void)deleteItemsForSpecifiers:(id)a0;
- (BOOL)isSpecifierForAutoFillItem:(id)a0;
- (void)_viewVirtualCardInWallet:(id)a0;

@end
