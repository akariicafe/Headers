@class NSString, ICSQLiteConnection;

@interface ICDelegateAccountStoreSQLWriter : NSObject <ICDelegateAccountStoreWriter> {
    ICSQLiteConnection *_connection;
    BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_removeTokenForIdentityKey:(id)a0;
- (BOOL)_removeAccountForIdentityKey:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_setToken:(id)a0 forIdentityKey:(id)a1;

@end
