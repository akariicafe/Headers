@class ACDServer;

@interface ACDKeychainManager : NSObject

@property (class, weak, nonatomic) ACDServer *server;

+ (void)initialize;
+ (id)keychainDeletedHostnameAccounts;
+ (BOOL)_keychainLock_removeItemForService:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 error:(id *)a4;
+ (void)_migrateCredential:(id)a0 forAccount:(id)a1 clientID:(id)a2;
+ (BOOL)_shouldSyncCredentialForAccount:(id)a0;
+ (void)removeDataclassAccountSyncItemForAccount:(id)a0;
+ (void)removeCredentialForAccount:(id)a0 clientID:(id)a1 error:(id *)a2;
+ (void)removeCredentialForAccount:(id)a0;
+ (void)setCredentialForAccount:(id)a0 error:(id *)a1;
+ (BOOL)_removeItemForService:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)removeAccountSyncItemForAccount:(id)a0 clientID:(id)a1 properties:(id)a2 error:(id *)a3;
+ (void)setCredentialForNewAccount:(id)a0 clientID:(id)a1 error:(id *)a2;
+ (void)setAccountSynciOSVersion:(id)a0;
+ (void)_saveCredential:(id)a0 forAccount:(id)a1 clientID:(id)a2 error:(id *)a3;
+ (void)_keychainLock_updateItem:(id)a0 existingPassword:(id)a1 forServiceName:(id)a2 username:(id)a3 accessGroup:(id)a4 accessibility:(id)a5 options:(id)a6 error:(id *)a7;
+ (void)removeCredentialForAccount:(id)a0 error:(id *)a1;
+ (void)setCredentialForAccount:(id)a0 clientID:(id)a1 error:(id *)a2;
+ (void)_removeCredentialsForAccount:(id)a0 clientID:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)keychainAccounts;
+ (void)setCredentialForAccount:(id)a0 clientID:(id)a1;
+ (void)_setCredentialForAccount:(id)a0 clientID:(id)a1 handleCredentialItemRemovals:(BOOL)a2 error:(id *)a3;
+ (void)createDataclassAccountSyncItemForAccount:(id)a0 withDataclassActions:(id)a1;
+ (void)_createNoSyncOAuthTokens:(id)a0 account:(id)a1 clientID:(id)a2;
+ (id)credentialForManagedAccountObject:(id)a0 clientID:(id)a1 error:(id *)a2;
+ (id)keychainServiceNameForClientID:(id)a0 accountTypeIdentifier:(id)a1 additionalAccountTypeSegment:(id)a2 key:(id)a3;
+ (void)_accountTypeIdentifierFromComponents:(id)a0 handler:(id /* block */)a1;
+ (id)keychainDeletedContactAccounts;
+ (BOOL)accountSyncMigrated;
+ (BOOL)_removeCredentialItemWithKey:(id)a0 forAccountWithID:(id)a1 username:(id)a2 accountTypeID:(id)a3 clientID:(id)a4 options:(id)a5 error:(id *)a6;
+ (void)notifiyCredentialChangedForAccount:(id)a0;
+ (void)_setItem:(id)a0 forServiceName:(id)a1 username:(id)a2 accessGroup:(id)a3 accessibility:(id)a4 syncable:(BOOL)a5 requiresTouchID:(BOOL)a6 options:(id)a7 error:(id *)a8;
+ (id)credentialForAccount:(id)a0 clientID:(id)a1 error:(id *)a2;
+ (id)_credentialForAccountWithID:(id)a0 accountTypeID:(id)a1 credentialType:(id)a2 clientID:(id)a3 allowAdditionalAccountTypeSegment:(BOOL)a4 options:(id)a5 error:(id *)a6;
+ (id)credentialForManagedAccountObject:(id)a0 clientID:(id)a1;
+ (void)componentsFromKeychainServiceName:(id)a0 handler:(id /* block */)a1;
+ (void)removeTombstoneForService:(id)a0 keychainAccountIdentifier:(id)a1;
+ (void)_keychainLock_addItem:(id)a0 forServiceName:(id)a1 username:(id)a2 accessGroup:(id)a3 accessibility:(id)a4 syncable:(BOOL)a5 requiresTouchID:(BOOL)a6 error:(id *)a7;
+ (void)removeCredentialForAccount:(id)a0 clientID:(id)a1;
+ (id)credentialForAccount:(id)a0 clientID:(id)a1;
+ (void)_setNonPersistentCredentialTimerForAccount:(id)a0;
+ (id)_itemForServiceName:(id)a0 username:(id)a1 accessGroup:(id)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)createAccountSyncItemForAccount:(id)a0 clientID:(id)a1 properties:(id)a2 error:(id *)a3;
+ (void)removeCredentialForAccount:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)keychainHostnameAccounts;
+ (void)_fallbackToUnsyncedOAuthTokens:(id)a0;
+ (id)accountSynciOSVersion;
+ (id)_fetchOptionsForAccount:(id)a0;
+ (BOOL)createAccountSyncMigratedItemWithError:(id *)a0;
+ (id)credentialForManagedAccountObject:(id)a0;
+ (void)setCredentialForAccount:(id)a0;
+ (id)keychainDeletedAccounts;
+ (id)removeTombstonesForAccount:(id)a0 clientID:(id)a1 error:(id *)a2;

@end
