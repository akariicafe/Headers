@class NSString, PKEncryptedPushProvisioningTarget, NSData;

@interface PKPaymentShareableCredential : PKPaymentCredential

@property (readonly, nonatomic) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSData *passThumbnailImageData;
@property (retain, nonatomic) NSData *externalizedAuth;
@property (nonatomic) long long source;
@property (readonly, nonatomic, getter=isBackgroundProvisioning) BOOL backgroundProvisioning;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)initWithEncryptedProvisioningTarget:(id)a0 provisioningSharingIdentifier:(id)a1 passThumbnailImageData:(id)a2;
- (id)initWithEncryptedProvisioningTarget:(id)a0 provisioningSharingIdentifier:(id)a1 passThumbnailImageData:(id)a2 isBackgroundProvisioning:(BOOL)a3;
- (id)initWithProvisioningSharingIdentifer:(id)a0 isBackgroundProvisioning:(BOOL)a1;

@end
