@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKShareableCredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifierHash;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *nonce;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToShareableCredential:(id)a0;
- (id)protoCredential;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoCredential:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
