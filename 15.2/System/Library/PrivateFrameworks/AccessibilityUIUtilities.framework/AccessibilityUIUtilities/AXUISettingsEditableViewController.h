@interface AXUISettingsEditableViewController : AXUISettingsBaseListController

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)_configureEditButton;
- (id)makeSpecifiers;
- (void)removeDataForSpecifier:(id)a0;
- (BOOL)canEditTable;
- (void)_donePressed;
- (void)_editPressed;
- (void)_addDoneButton;

@end
