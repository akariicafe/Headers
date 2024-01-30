@class NSString;
@protocol PKSubcredentialProvisioningFlowControllerDelegate;

@interface PKSubcredentialInvitationFlowController : NSObject <PKSubcredentialInvitationFlowControllerProtocol>

@property (weak, nonatomic) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)canAttemptLocalDeviceProvisioningWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)canAttemptRemoteDeviceProvisioningWithContext:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isPassPersonalizedOrPersonalizing:(id)a0;
+ (id)localDevicePassMatchingPairedTerminalIdentifier:(id)a0;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)alertForOperation:(id)a0 withError:(id)a1 retryHandler:(id /* block */)a2 cancelationHandler:(id /* block */)a3;
- (id)localDeviceProvisioningViewModelForOperation:(id)a0;
- (id)localizedIssuerNameForProvisioningOperation:(id)a0;
- (void)nextViewControllerFromProvisioningOperation:(id)a0 withCompletion:(id /* block */)a1;
- (void)provisioningFinishedWithOperation:(id)a0;
- (void)provisioningWasCanceledWithOperation:(id)a0;
- (id)remoteDeviceProvisioningViewModelForOperation:(id)a0;

@end
