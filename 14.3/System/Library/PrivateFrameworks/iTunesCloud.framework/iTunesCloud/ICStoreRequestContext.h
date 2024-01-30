@class ICUserIdentity, ICUserIdentityStore, ICStoreDialogResponseHandler;

@interface ICStoreRequestContext : ICRequestContext <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ICUserIdentity *identity;
@property (readonly, copy, nonatomic) ICUserIdentity *delegatedIdentity;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;
@property (readonly, copy, nonatomic) ICStoreDialogResponseHandler *storeDialogResponseHandler;
@property (readonly, nonatomic) BOOL allowsExpiredBags;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)activeStoreAccountRequestContext;

- (void).cxx_destruct;
- (void)setIdentityStore:(id)a0;
- (void)setIdentity:(id)a0;
- (id)initWithIdentity:(id)a0 clientInfo:(id)a1;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1 clientInfo:(id)a2 authenticationProvider:(id)a3;
- (void)setStoreDialogResponseHandler:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (void)setPersonalizationStyle:(long long)a0;
- (void)setDelegatedIdentity:(id)a0;
- (void)setAllowsExpiredBags:(BOOL)a0;
- (id)initWithIdentity:(id)a0;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1 clientInfo:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
