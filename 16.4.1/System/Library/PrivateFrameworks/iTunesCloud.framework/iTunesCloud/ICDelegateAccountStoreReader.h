@class ICSQLiteConnection, NSDate;

@interface ICDelegateAccountStoreReader : NSObject {
    ICSQLiteConnection *_connection;
    BOOL _isValid;
}

@property (readonly, copy, nonatomic) NSDate *lastExpirationPruningDate;
@property (readonly, nonatomic) long long overestimatedNumberOfTokens;

- (id)tokenForUserIdentity:(id)a0;
- (void)_enumerateQueryResults:(id)a0 usingBlock:(id /* block */)a1;
- (id)identityPropertiesForUserIdentity:(id)a0;
- (id)initWithConnection:(id)a0;
- (id)_tokenWithSQLiteRow:(id)a0;
- (void)enumerateTokensWithType:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateTokensUsingBlock:(id /* block */)a0;
- (id)_userIdentityWithSQLiteRow:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)enumerateDelegationUUIDsForUserIdentity:(id)a0 usingBlock:(id /* block */)a1;

@end
