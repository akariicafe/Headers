@interface CNAccountsAndGroupsStyle : NSObject

+ (id)styleForTraitCollection:(id)a0;

- (id)backgroundColor;
- (id)sectionConfigurationForLayoutEnvironment:(id)a0;
- (id)parentCellConfigurationWithText:(id)a0;
- (id)cellConfigurationForSelectedState:(BOOL)a0;
- (id /* block */)cellBackgroundViewConfigurationProvider;
- (id)parentCellTrailingAccessoryConfigurations;
- (id)cellTrailingAccessoryConfigurationsForSelectedState:(BOOL)a0;

@end
