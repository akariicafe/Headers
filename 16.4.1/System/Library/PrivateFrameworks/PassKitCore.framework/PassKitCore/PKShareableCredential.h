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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)protoCredential;
- (id)initWithProtoCredential:(id)a0;
- (BOOL)isEqualToShareableCredential:(id)a0;

@end
