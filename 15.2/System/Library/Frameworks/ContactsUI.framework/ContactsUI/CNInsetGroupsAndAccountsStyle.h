@interface CNInsetGroupsAndAccountsStyle : CNAccountsAndGroupsStyle

- (id)backgroundColor;
- (id)sectionConfigurationForLayoutEnvironment:(id)a0;
- (id)parentCellConfigurationWithText:(id)a0;
- (id)cellConfigurationForSelectedState:(BOOL)a0;
- (id /* block */)cellBackgroundViewConfigurationProvider;

@end
