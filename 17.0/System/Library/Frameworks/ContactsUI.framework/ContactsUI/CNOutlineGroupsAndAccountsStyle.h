@interface CNOutlineGroupsAndAccountsStyle : CNAccountsAndGroupsStyle

- (id)backgroundColor;
- (long long)buttonBehavior;
- (BOOL)isInset;
- (id /* block */)cellConfigurationUpdateHandler;
- (id)parentCellConfigurationWithText:(id)a0;
- (id)sectionConfigurationForLayoutEnvironment:(id)a0 withLeadingActionsProvider:(id /* block */)a1 withTrailingActionsProvider:(id /* block */)a2 hasHeader:(BOOL)a3;

@end
