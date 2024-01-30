@class PSUIPearlAttentionGroupController, PSSpecifier, LAContext, OBPrivacyPresenter, NSString, PSEnrollmentNavigationController;

@interface PSUIPearlPasscodeController : PSUIBiometricController <BKUIPearlEnrollControllerDelegate, LAUIDelegate, BFFPasscodeViewControllerDelegate>

@property (retain, nonatomic) PSSpecifier *enrollFaceSpecifier;
@property (retain, nonatomic) PSEnrollmentNavigationController *enrollFaceController;
@property (retain, nonatomic) PSUIPearlAttentionGroupController *attentionGroupController;
@property (retain, nonatomic) LAContext *authContext;
@property (retain, nonatomic) OBPrivacyPresenter *presenter;
@property (retain) PSSpecifier *currentlyPresentingPearlEnrollSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)enroll:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)backgrounded:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (BOOL)isEnrolled;
- (void)pearlEnrollController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)passcodeViewController:(id)a0 didFinishWithPasscodeCreation:(id)a1;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)a0;
- (BOOL)passcodeViewControllerAllowSkip:(id)a0;
- (void)enrollBiometric;
- (id)biometricNameDescription;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (id)headerForUseBiometricSection;
- (void)setBiometricUnlockEnabled:(id)a0 specifier:(id)a1;
- (id)passcodeController;
- (BOOL)isEnrollmentAvailable;
- (void)pushPasscodePane;
- (void)popPearlEnrollmentController;
- (void)refetchBiometricTemplateWithSpecifier:(id)a0 action:(id /* block */)a1;
- (void)presentAlertForAlternateAppearanceIfNecessary:(id)a0;
- (void)validateBiometricTemplateUUIDWithSpecifier:(id)a0 action:(id /* block */)a1;
- (BOOL)hasMatchingBiometricTemplate;
- (void)validateBiometricTemplateUUIDAndEnroll:(id)a0;
- (void)deleteFaceIDIdentitiesCheckWithSpecifier:(id)a0;
- (BOOL)hasReachedMaximumBiometricEnrollmentCount;
- (unsigned long long)numberOfAppsUsingPearl;
- (id)numberOfAppsUsingPearlDescription:(id)a0;
- (id)pearlEnrollSpecifiers;
- (void)cancelModalFlow;
- (void)presentAlertForDeletingPearlIdentities;
- (void)deleteAllIdentities;
- (void)presentSecondAlertForDeletingMatchedBiometricTemplate;
- (void)pearlLearnMoreTapped:(id)a0;

@end
