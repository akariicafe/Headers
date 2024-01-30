@class NSString;

@interface BFFFinishSetupBiometricAndPasscodeController : NSObject <UIPopoverPresentationControllerDelegate, BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling> {
    NSString *_flowSkipIdentifier;
}

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)passcodeViewController:(id)a0 didFinishWithPasscodeCreation:(id)a1;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)a0;
- (BOOL)passcodeViewControllerAllowSkip:(id)a0;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (id)preconditionViewControllerWithCompletion:(id /* block */)a0;
- (id)initWithFlowSkipIdentifier:(id)a0;
- (id)createViewControllerWithPasscode:(id)a0 completion:(id /* block */)a1;
- (void)_userDidTapPasscodeCancelButton:(id)a0;

@end
