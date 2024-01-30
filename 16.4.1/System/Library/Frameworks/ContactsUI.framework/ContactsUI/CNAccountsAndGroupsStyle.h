@interface CNAccountsAndGroupsStyle : NSObject

+ (id)styleForTraitCollection:(id)a0;

- (id)backgroundColor;
- (long long)buttonBehavior;
- (BOOL)isInset;
- (id)cellAccessoriesForContextMenuPreviewForItem:(id)a0;
- (id)cellAccessoriesForItem:(id)a0;
- (id /* block */)cellConfigurationUpdateHandler;
- (id)parentCellAccessories;
- (id)parentCellConfigurationWithText:(id)a0;
- (id)sectionConfigurationForLayoutEnvironment:(id)a0 withLeadingActionsProvider:(id /* block */)a1 withTrailingActionsProvider:(id /* block */)a2 hasHeader:(BOOL)a3;
- (BOOL)shouldShowCellSelection;

@end
