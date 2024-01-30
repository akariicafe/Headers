@class NSString, PKEncryptedPushProvisioningTarget, NSData;

@interface PKPaymentShareableCredential : PKPaymentCredential

@property (readonly, nonatomic) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSData *passThumbnailImageData;
@property (readonly, nonatomic, getter=isBackgroundProvisioning) BOOL backgroundProvisioning;

- (void).cxx_destruct;
- (id)initWithEncryptedProvisioningTarget:(id)a0 provisioningSharingIdentifier:(id)a1 passThumbnailImageData:(id)a2;
- (id)initWithProvisioningSharingIdentifer:(id)a0 isBackgroundProvisioning:(BOOL)a1;

@end
