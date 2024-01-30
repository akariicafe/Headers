@class NSString, NSDate;

@interface PKPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long appleIdentifierType;
@property (copy, nonatomic) NSString *appleIdentifier;
@property (readonly, copy, nonatomic) NSString *policyIdentifier;
@property (readonly, copy, nonatomic) NSString *provisioningCredentialIdentifier;
@property (readonly, copy, nonatomic) NSString *cardConfigurationIdentifier;
@property (readonly, copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *nonce;
@property (readonly, nonatomic) NSString *accountHash;
@property (readonly, nonatomic) NSString *templateIdentifier;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) BOOL requiresSimultaneousRequestRouting;
@property (nonatomic) unsigned long long targetDevice;

- (id)initWithAppleIdentifier:(id)a0 appleIdentifierType:(long long)a1 pushProvisioningPolicyIdentifier:(id)a2 provisioningCredentialIdentifier:(id)a3 cardConfigurationIdentifier:(id)a4 sharingInstanceIdentifier:(id)a5 nonce:(id)a6 accountHash:(id)a7 templateIdentifier:(id)a8 relyingPartyIdentifier:(id)a9 requiresSimultaneousRequestRouting:(BOOL)a10 targetDevice:(unsigned long long)a11;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToProvisioningTarget:(id)a0;
- (id)initWithAppleIdentifier:(id)a0 appleIdentifierType:(long long)a1 pushProvisioningPolicyIdentifier:(id)a2 provisioningCredentialIdentifier:(id)a3 cardConfigurationIdentifier:(id)a4 sharingInstanceIdentifier:(id)a5 nonce:(id)a6;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
