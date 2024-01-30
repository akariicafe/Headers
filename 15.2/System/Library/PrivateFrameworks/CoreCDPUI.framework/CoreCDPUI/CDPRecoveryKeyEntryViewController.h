@class CDPRecoveryKeyCreateHeaderView, NSString, CDPRecoveryKeyEntryViewModel;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
}

- (id)specifiers;
- (BOOL)hidesNextButton;
- (void)viewDidLoad;
- (id)placeholderText;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)textEntryCell;
- (void)didFinishEnteringText:(id)a0;
- (void).cxx_destruct;
- (id)headerView;
- (void)dealloc;
- (id)footerTextLabel;
- (id)initWithRecoveryContext:(id)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (void)cancelFlow:(id)a0;
- (id)footerActionButton;
- (void)continueFlow:(id)a0;
- (void)_handleRecoveryKeyValidationWithSuccess:(BOOL)a0 error:(id)a1;

@end
