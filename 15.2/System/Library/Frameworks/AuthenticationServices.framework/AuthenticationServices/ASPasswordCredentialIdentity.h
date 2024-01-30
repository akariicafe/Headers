@class NSString, SFExternalCredentialIdentityStoreIdentifier, ASCredentialServiceIdentifier;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *recordIdentifier;
@property (nonatomic) long long rank;

+ (id)identityWithServiceIdentifier:(id)a0 user:(id)a1 recordIdentifier:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithFoundationCredentialIdentity:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 user:(id)a1 recordIdentifier:(id)a2;

@end
