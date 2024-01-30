@class PKPaymentProvisioningController, PKAppleBalanceCredential;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKAppleBalanceSetupFlowController : NSObject

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) long long setupContext;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) PKAppleBalanceCredential *credential;

- (void).cxx_destruct;
- (id)_configuredCredentialProvisioningController;
- (void)_requestProvisioningEligibility:(id /* block */)a0;
- (id)_viewControllerForState:(long long)a0;
- (id)firstViewController;
- (id)initWithProvisioningController:(id)a0 product:(id)a1 setupContext:(long long)a2 setupDelegate:(id)a3;
- (void)nextViewControllerFromState:(long long)a0 completion:(id /* block */)a1;
- (void)requestEligibility:(id /* block */)a0;

@end
