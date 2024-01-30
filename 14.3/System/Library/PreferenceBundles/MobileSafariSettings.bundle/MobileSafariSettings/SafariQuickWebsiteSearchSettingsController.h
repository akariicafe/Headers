@class UIBarButtonItem;

@interface SafariQuickWebsiteSearchSettingsController : SafariSettingsListController {
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
}

- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (id)specifiers;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)_deleteBarButtonItem;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)willBecomeActive;
- (void)_cancelEditing:(id)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateDeleteButton;
- (void)_updateEditButton;
- (id)_cancelBarButtonItem;
- (void)_quickWebsiteSearchControllerDidFinishLoading:(id)a0;
- (void)_setUseSiteSpecificSearch:(id)a0 specifier:(id)a1;
- (BOOL)_hasSearchProviders;
- (void)_deleteItemsForSpecifiers:(id)a0;
- (void)_deleteSelectedItems:(id)a0;

@end
