@class BFFFinishSetupFaceIDViewController;

@interface BFFFinishSetupFaceIDController : BFFFinishSetupBiometricAndPasscodeController {
    BFFFinishSetupFaceIDViewController *_viewController;
}

+ (id)finishSetupFaceIDController;

- (void).cxx_destruct;
- (id)init;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;
- (id)createViewControllerWithPasscode:(id)a0 completion:(id /* block */)a1;

@end
