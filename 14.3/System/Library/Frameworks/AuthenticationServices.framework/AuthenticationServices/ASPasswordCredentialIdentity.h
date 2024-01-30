@class NSString, ASCredentialServiceIdentifier;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id credentialIdentityStoreIdentifier;
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *recordIdentifier;
@property (nonatomic) long long rank;

+ (id)identityWithServiceIdentifier:(id)a0 user:(id)a1 recordIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithFoundationCredentialIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 user:(id)a1 recordIdentifier:(id)a2;

@end
