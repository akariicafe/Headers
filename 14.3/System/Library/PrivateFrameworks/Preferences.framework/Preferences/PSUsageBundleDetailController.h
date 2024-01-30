@interface PSUsageBundleDetailController : PSEditableListController

+ (id)mediaGroups;
+ (void)setupSpecifier:(id)a0 forMediaGroups:(id)a1;

- (id)size:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)updateSizesAfterDeletingSize:(float)a0 shouldPop:(BOOL)a1;
- (id)sizeForSpecifier:(id)a0;
- (void)loadView;
- (id)specifiers;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;

@end
