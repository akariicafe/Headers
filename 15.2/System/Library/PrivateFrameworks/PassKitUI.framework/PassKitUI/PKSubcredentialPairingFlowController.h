@class NSString;
@protocol PKSubcredentialProvisioningFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKSubcredentialPairingFlowController : NSObject <PKSubcredentialPairingFlowControllerProtocol>

@property (weak, nonatomic) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharingRequestForContext:(id)a0 withCredential:(id)a1;
+ (id)credentialToShareForContext:(id)a0;
+ (id)contextFromPaymentCredential:(id)a0 provisioningController:(id)a1;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)remoteDeviceProvisioningViewModelForOperation:(id)a0;
- (void)provisioningFinishedWithOperation:(id)a0;
- (void)nextViewControllerFromProvisioningOperation:(id)a0 withCompletion:(id /* block */)a1;
- (id)alertForOperation:(id)a0 withError:(id)a1 retryHandler:(id /* block */)a2 cancelationHandler:(id /* block */)a3;
- (void)nextViewControllerFromHeroViewController:(id)a0 completion:(id /* block */)a1;
- (void)canProvisionOnRemoteDeviceWithContext:(id)a0 sharingRequest:(id)a1 completion:(id /* block */)a2;
- (id)nextQueuedProvisioningViewControllerFromProvisioningOperation:(id)a0;
- (id)localizedIssuerNameForProvisioningOperation:(id)a0;
- (void)provisioningWasCanceledWithOperation:(id)a0;
- (id)localDeviceProvisioningViewModelForOperation:(id)a0;
- (void)prewarmPairingWithContext:(id)a0 completion:(id /* block */)a1;
- (id)startingViewControllerForContext:(id)a0;

@end
