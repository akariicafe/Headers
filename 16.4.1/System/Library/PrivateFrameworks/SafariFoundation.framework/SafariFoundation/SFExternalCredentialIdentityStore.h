@class NSObject, WBSSQLiteStatementCache;
@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStore : WBSSQLiteStore {
    WBSSQLiteStatementCache *_statements;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithURL:(id)a0;
- (int)_createFreshDatabaseSchema;
- (void).cxx_destruct;
- (int)_vacuum;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (int)_currentSchemaVersion;
- (void)openAndCheckIntegrity:(BOOL)a0 createIfNeeded:(BOOL)a1 fallBackToMemoryStoreIfError:(BOOL)a2 lockingPolicy:(long long)a3 completionHandler:(id /* block */)a4;
- (void)_databaseWillClose;
- (id)initWithURL:(id)a0 protectionType:(long long)a1;
- (id)_credentialIdentityFromRow:(id)a0;
- (id)_fetchCredentialIdentities;
- (id)_fetchCredentialIdentitiesMatchingDomains:(id)a0;
- (id)_fetchCredentialIdentitiesWithType:(long long)a0;
- (BOOL)_fetchStoreIsEmpty;
- (int)_insertCredentialIdentity:(id)a0;
- (int)_removeAllCredentialIdentities;
- (int)_removeCredentialIdentities:(id)a0;
- (int)_removeCredentialIdentity:(id)a0;
- (int)_saveCredentialIdentities:(id)a0;
- (int)_updateCredentialIdentity:(id)a0;
- (void)fetchCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)fetchStoreEmptyStateWithCompletion:(id /* block */)a0;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)removeCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)a0 completion:(id /* block */)a1;
- (void)saveCredentialIdentities:(id)a0 completion:(id /* block */)a1;

@end
