@interface PSEditableListController : PSListController {
    BOOL _editable;
    BOOL _editingDisabled;
}

- (void)didLock;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)editable;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)editDoneTapped;
- (id)_editButtonBarItem;
- (void)_setEditable:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)performDeletionActionForSpecifier:(id)a0;
- (void)setEditingButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setEditButtonEnabled:(BOOL)a0;
- (void)_updateNavigationBar;
- (void)setEditable:(BOOL)a0;
- (id)init;
- (void)suspend;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
