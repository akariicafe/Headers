@interface CalAccountStoreChangeFilterDelegateForLegacyICBURestore : NSObject <CalChangeFilteringMigrationAccountStoreDelegate>

- (BOOL)allowChangesToExistingTopLevelAccount:(id)a0;
- (BOOL)allowCreationOfTopLevelAccountWithTypeIdentifier:(id)a0;

@end
