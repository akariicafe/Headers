@class NSString, CRKASMCredentialStore;
@protocol CRKIdentity;

@interface CRKASMIdentityVendor : NSObject

@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *commonNamePrefix;
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, nonatomic) id<CRKIdentity> identity;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)existingIdentity;
- (id)initWithUserIdentifier:(id)a0 commonNamePrefix:(id)a1 credentialStore:(id)a2;
- (id)makeIdentityAndAddToKeychain;
- (id)makeIdentity;

@end
