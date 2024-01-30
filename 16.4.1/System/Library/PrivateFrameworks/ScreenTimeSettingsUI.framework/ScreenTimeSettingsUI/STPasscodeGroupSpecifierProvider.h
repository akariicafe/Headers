@class PSListController, PSSpecifier;

@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *togglePasscodeSpecifier;
@property (readonly, weak) PSListController *listController;

+ (id)providerWithCoordinator:(id)a0 listController:(id)a1;

- (void)setCoordinator:(id)a0;
- (BOOL)isHidden;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (id)_authenticationContextWithReasonKey:(id)a0 presentingViewController:(id)a1;
- (void)_promptForRecoveryAppleIDWithPINController:(id)a0 passcode:(id)a1;
- (void)_removeManagedPasscode;
- (id)_removePasscodeActionWithPINOptionsTitle:(id)a0 pinOptionsHandler:(id /* block */)a1 pinValidationHandler:(id /* block */)a2;
- (void)_setManagedPasscode;
- (void)changeOrRemovePasscode:(id)a0;
- (void)reloadTogglePasscodeSpecifier;

@end
