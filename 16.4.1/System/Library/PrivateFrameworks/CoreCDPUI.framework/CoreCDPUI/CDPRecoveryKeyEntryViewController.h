@class CDPRecoveryKeyCreateHeaderView, NSString, CDPRecoveryKeyEntryViewModel;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
}

- (id)headerView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)placeholderText;
- (BOOL)hidesNextButton;
- (void)didFinishEnteringText:(id)a0;
- (id)textEntryCell;
- (id)footerTextLabel;
- (void)_handleRecoveryKeyValidationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)cancelFlow:(id)a0;
- (void)continueFlow:(id)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (id)footerActionButton;
- (void)handleForgotRecoveryKey:(id)a0;
- (id)initWithRecoveryContext:(id)a0;
- (void)showOtherRecoveryOptions:(id)a0;
- (void)skipRecoveryKey:(id)a0;

@end
