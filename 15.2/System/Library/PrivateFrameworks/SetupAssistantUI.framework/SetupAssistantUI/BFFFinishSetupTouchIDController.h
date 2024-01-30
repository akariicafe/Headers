@interface BFFFinishSetupTouchIDController : BFFFinishSetupBiometricAndPasscodeController

+ (id)finishSetupTouchIDController;

- (id)init;
- (id)createViewControllerWithPasscode:(id)a0 completion:(id /* block */)a1;

@end
