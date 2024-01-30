@class NSString, NSDate;

@interface PKPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long appleIdentifierType;
@property (readonly, copy, nonatomic) NSString *appleIdentifier;
@property (readonly, copy, nonatomic) NSString *policyIdentifier;
@property (readonly, copy, nonatomic) NSString *provisioningCredentialIdentifier;
@property (readonly, copy, nonatomic) NSString *cardConfigurationIdentifier;
@property (readonly, copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *nonce;

- (id)initWithAppleIdentifier:(id)a0 appleIdentifierType:(long long)a1 pushProvisioningPolicyIdentifier:(id)a2 provisioningCredentialIdentifier:(id)a3 cardConfigurationIdentifier:(id)a4 sharingInstanceIdentifier:(id)a5 nonce:(id)a6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToProvisioningTarget:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
