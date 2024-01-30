@class NSString, CRKASMCredentialStore;
@protocol CRKIdentity;

@interface CRKASMIdentityVendor : NSObject

@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *commonNamePrefix;
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, nonatomic) id<CRKIdentity> identity;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)existingIdentity;
- (id)makeIdentityAndAddToKeychain;
- (id)makeIdentity;
- (id)initWithUserIdentifier:(id)a0 commonNamePrefix:(id)a1 credentialStore:(id)a2;

@end
