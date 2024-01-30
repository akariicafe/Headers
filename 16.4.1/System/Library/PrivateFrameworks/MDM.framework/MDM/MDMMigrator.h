@interface MDMMigrator : NSObject

+ (id)sharedMigrator;

- (void)_createRMAccountWithPersonaID:(id)a0 managedAppleID:(id)a1 profileIdentifier:(id)a2 organizationName:(id)a3;
- (void)_moveNonStoreManagedBooksToSystemGroupContainer;
- (void)_moveNonStoreManagedBooksToSystemGroupContainerFromLegacyPath:(id)a0;
- (void)_resetManagedAppRemovability;
- (void)_resetManagedAppTapToPayScreenLock;
- (void)_updateNonStoreBooksManifestForSystemGroupContainer;
- (void)_updateSkipBackupKeyForNonStoreBooksDirectory;
- (void)_updateToMDMPropertiesForDDMActiveState;
- (void)_updateUnlockTokenSecretToClassDIfNeeded;
- (void)_updateUserEnrollmentToUseRMAccount;
- (void)migrateMDMWithContext:(int)a0;

@end
