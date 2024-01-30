@class NSString, ICSQLiteConnection;

@interface ICDelegateAccountStoreSQLWriter : NSObject <ICDelegateAccountStoreWriter> {
    ICSQLiteConnection *_connection;
    BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (BOOL)_removeAccountForIdentityKey:(id)a0;
- (BOOL)_removeTokenForIdentityKey:(id)a0;
- (void)_setToken:(id)a0 forIdentityKey:(id)a1;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;

@end
