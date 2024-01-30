@class BFFPasscodeViewController;

@interface BFFFinishSetupPasscodeController : NSObject <BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling> {
    BFFFinishSetupPasscodeController *_selfReference;
    BFFPasscodeViewController *_passcodeViewController;
}

@property (copy, nonatomic) id /* block */ completion;

+ (id)finishSetupPasscodeController;

- (void).cxx_destruct;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (void)passcodeViewController:(id)a0 didFinishWithPasscodeCreation:(id)a1;
- (void)_completeWithPasscode:(id)a0 result:(unsigned long long)a1;
- (void)_userDidTapCancelButton:(id)a0;

@end
