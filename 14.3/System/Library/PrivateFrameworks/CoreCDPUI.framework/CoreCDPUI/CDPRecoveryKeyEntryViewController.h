@class CDPRecoveryKeyCreateHeaderView, NSString, CDPRecoveryKeyEntryViewModel;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
}

- (BOOL)hidesNextButton;
- (void).cxx_destruct;
- (id)headerView;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)textEntryCell;
- (id)placeholderText;
- (void)didFinishEnteringText:(id)a0;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)footerTextLabel;
- (id)initWithRecoveryContext:(id)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (void)cancelFlow:(id)a0;
- (id)footerActionButton;
- (void)continueFlow:(id)a0;
- (void)_handleRecoveryKeyValidationWithSuccess:(BOOL)a0 error:(id)a1;

@end
