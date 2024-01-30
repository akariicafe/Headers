@class NSArray, PSSpecifier, NSString, ACAccount, NSMutableDictionary, MCUIUserEnrollmentAccountSpecifierProvider;

@interface ACUIDataclassConfigurationViewController : ACUIViewController {
    BOOL _forceMailSetup;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    BOOL _isMergingSyncData;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    BOOL _didShowDataclassActionPickerDuringRemoval;
    MCUIUserEnrollmentAccountSpecifierProvider *_userEnrollmentAccountSpecifierProvider;
}

@property (nonatomic, getter=isFirstTimeSetup) BOOL firstTimeSetup;
@property (copy, nonatomic) NSArray *preEnabledDataclasses;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) PSSpecifier *dataclassGroupSpecifier;
@property (readonly, nonatomic) PSSpecifier *deleteButtonSpecifier;
@property (nonatomic) BOOL shouldShowDeleteAccountButton;
@property (nonatomic) BOOL shouldEnableDeleteAccountButton;
@property (nonatomic) BOOL shouldEnableAccountSummaryCell;
@property (nonatomic) BOOL isMailSetupForced;
@property (copy, nonatomic) id /* block */ configurationCompletion;

+ (BOOL)shouldPresentAsModalSheet;

- (id)init;
- (id)displayedAccountTypeString;
- (void).cxx_destruct;
- (id)displayedShortAccountTypeString;
- (id)specifiers;
- (id)_accountIdentifier;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)_navigationTitle;
- (BOOL)isUserEnrollment;
- (void)doneButtonTapped:(id)a0;
- (void)viewDidLoad;
- (void)deleteButtonTapped:(id)a0;
- (void)operationsHelper:(id)a0 willSaveAccount:(id)a1;
- (void)operationsHelper:(id)a0 didSaveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (void)operationsHelper:(id)a0 willRemoveAccount:(id)a1;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (id)operationsHelper:(id)a0 desiredDataclassActionFromPicker:(id)a1;
- (BOOL)operationsHelper:(id)a0 shouldRemoveAccount:(id)a1;
- (long long)operationsHelper:(id)a0 shouldRemoveOrDisableAccount:(id)a1;
- (void)forceMailSetup;
- (BOOL)shouldVerifyBeforeAccountSave;
- (id)specifierForAccountSummaryCell;
- (id)_specifiersForDataclasses:(id)a0;
- (BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
- (id)otherSpecifiers;
- (id)titleForDeleteButton;
- (Class)accountInfoControllerClass;
- (id)valueForAccountSummaryCell;
- (id)_orderDataclassList:(id)a0;
- (BOOL)shouldShowSpecifierForDataclass:(id)a0;
- (id)specifierForDataclass:(id)a0;
- (void)dataclassSwitchStateDidChange:(id)a0 withSpecifier:(id)a1;
- (id)dataclassSwitchStateForSpecifier:(id)a0;
- (BOOL)_isUserOverridableForDataclass:(id)a0;
- (void)setDataclass:(id)a0 enabled:(BOOL)a1;
- (id)_setupSpinnerTimerForSpecifier:(id)a0;
- (void)_setDataclass:(id)a0 enabled:(BOOL)a1 onAccount:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)a0;
- (void)_presentUndoAlert:(id)a0 reason:(id)a1;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (BOOL)_confirmKeepLocalDataForDataclasses:(id)a0;
- (BOOL)_confirmDeleteLocalDataForDataclasses:(id)a0;
- (void)_notifyOfAccountSetupCompletion;
- (BOOL)_isShowingDeleteAccountButton;
- (id)userEnrollmentAccountSpecifierProvider;
- (BOOL)_promptUserToConfirmAccountDeletion;
- (BOOL)isAppleMailAccount:(id)a0;
- (BOOL)_confirmSyncDelete;
- (long long)_promptUserToConfirmAccountSyncDeletion;
- (id)deviceMessage;
- (id)messageForAccountDeletionWarning;
- (id)messageForAccountDeletionProgressUI;
- (long long)deleteButtonIndex;
- (void)reloadDynamicSpecifiersWithAnimation:(BOOL)a0;
- (void)appendDeleteAccountButton;

@end
