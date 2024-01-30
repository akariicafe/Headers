@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAssistantDelegateProxy : NSObject <PKPaymentSetupViewControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    id<PKPaymentSetupViewControllerDelegate> _externalDelegate;
    BOOL _didTerminateSetupFlow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setExternalDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 provisioningController:(id)a1;
- (void)viewController:(id)a0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 withShouldContinue:(BOOL)a2 error:(id)a3;
- (void)viewController:(id)a0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)a1 error:(id)a2;
- (void)viewController:(id)a0 didShowProvisioningError:(id)a1;
- (void)viewController:(id)a0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 completion:(id /* block */)a2;
- (void)viewController:(id)a0 requestPasscodeUpgradeWithCompletion:(id /* block */)a1;
- (void)viewControllerDidBeginSetupFlow:(id)a0;
- (void)viewControllerDidFailToChangePasscodeComplex:(id)a0;
- (void)viewControllerDidFinishChangingPasscodeComplex:(id)a0;
- (void)viewControllerDidShowEligibilityIssue:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
