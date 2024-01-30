@class ECDKIMVerifier, EMDaemonInterface;

@interface SGMailClientUtil : NSObject

@property (readonly, nonatomic) EMDaemonInterface *emailDaemon;
@property (readonly, nonatomic) ECDKIMVerifier *dkimVerifier;

+ (id)sharedInstance;
+ (id)convertLineEndingsToNetwork:(id)a0;

- (id)_init;
- (id)allVIPEmailAddresses;
- (void).cxx_destruct;
- (id)dataForMessageWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)isMessageAvailable:(id)a0;
- (id)messageWithIdentifier:(id)a0 error:(id *)a1;
- (id)signaturesToRemoveForDKIMVerificationContext:(id)a0 withFromHeaderDomain:(id)a1;
- (long long)verifyDKIMSignatureForMailWithData:(id)a0 error:(id *)a1;
- (long long)verifyDKIMSignatureForMailWithData:(id)a0 options:(long long)a1 error:(id *)a2;
- (long long)verifyDKIMSignatureForMailWithIdentifier:(id)a0 error:(id *)a1;
- (long long)verifyDKIMSignatureForPipelineEntity:(id)a0 error:(id *)a1;
- (long long)verifyDKIMSignatureForStorageEvent:(id)a0 error:(id *)a1;

@end
