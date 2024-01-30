@interface PSUsageBundleDetailController : PSEditableListController

+ (id)mediaGroups;
+ (void)setupSpecifier:(id)a0 forMediaGroups:(id)a1;

- (id)specifiers;
- (id)size:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)updateSizesAfterDeletingSize:(float)a0 shouldPop:(BOOL)a1;
- (id)sizeForSpecifier:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)loadView;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;

@end
