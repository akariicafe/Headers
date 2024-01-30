@class NSString, PKPaymentProvisioningController, UINavigationController;
@protocol PKPaymentWebServiceTargetDeviceProtocol, PKPaymentSetupViewControllerDelegate;

@interface PKPasscodeUpgradeFlowController : NSObject <DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    UINavigationController *_navigationController;
    id /* block */ _completionHandler;
    long long _presentedViewControllerCount;
}

@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (nonatomic) BOOL upgradeRequiredToAddNewPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithPaymentProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 navigationController:(id)a3 completionHandler:(id /* block */)a4;
- (void)showPasscodeUpgradeFlow;
- (void)beginShowingViewController;
- (void)endedShowingViewController;
- (void)newDevicePasscodeViewController:(id)a0 didFinishSettingPasscode:(BOOL)a1 withError:(id)a2;
- (void)dismissPasscodeUpgradeFlow;
- (void)_showPasscodeUpgradeExplanation;
- (void)_completeWithShouldContinue:(BOOL)a0 error:(id)a1;
- (void)_showNewDevicePasscodeViewControllerWithCurrentPasscode:(id)a0;
- (BOOL)_isWatchTarget;
- (void)_showChangePasscodeFlow;
- (void)_showCurrentDevicePasscodeViewController;

@end
