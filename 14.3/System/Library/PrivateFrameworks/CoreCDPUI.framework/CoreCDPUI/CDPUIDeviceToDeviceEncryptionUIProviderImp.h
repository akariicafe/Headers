@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider>

@property (copy, nonatomic) id /* block */ cancelActionHandler;
@property (copy, nonatomic) id /* block */ continueActionHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTapped:(id)a0;
- (void)promptForUpgradeWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptIneligibilityWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptForCancelWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (id)_upgradeViewControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (id)_upgradeAlertControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (id)_upgradeCardUIViewControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)continueTapped:(id)a0;

@end
