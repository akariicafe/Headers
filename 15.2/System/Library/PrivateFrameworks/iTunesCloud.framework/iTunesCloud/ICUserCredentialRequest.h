@class ICUserIdentity, ICUserIdentityStore, ICClientInfo;

@interface ICUserCredentialRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;
@property (readonly, copy, nonatomic) ICClientInfo *clientInfo;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1 clientInfo:(id)a2;

@end
