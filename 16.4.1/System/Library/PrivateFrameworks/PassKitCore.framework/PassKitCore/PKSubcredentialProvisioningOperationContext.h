@class PKAppletSubcredential, PKAppletSubcredentialEncryptedRequest, PKAppletSubcredentialSharingInvitation, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface PKSubcredentialProvisioningOperationContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKAppletSubcredential *addedCredential;
@property (retain, nonatomic) PKAppletSubcredentialEncryptedRequest *registrationData;
@property (retain, nonatomic) NSData *trackingAttestation;
@property (retain, nonatomic) NSData *ephemeralPublicKey;
@property (retain, nonatomic) NSData *encryptedData;
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *sentInvitation;
@property (nonatomic) BOOL hasAcceptedInvitation;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
