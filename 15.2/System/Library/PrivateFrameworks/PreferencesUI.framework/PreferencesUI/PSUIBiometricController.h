@class NSArray, NSString, PSEnrollContainerViewController, DCBiometricStore, CIDVUIBiometricBindingFlowManager;

@interface PSUIBiometricController : PSUIPasscodeLockController <UIPopoverControllerDelegate>

@property (retain, nonatomic) DCBiometricStore *biometricStrore;
@property (retain, nonatomic) CIDVUIBiometricBindingFlowManager *_biometricBindingFlowManager;
@property (nonatomic) long long storeState;
@property (weak, nonatomic) PSEnrollContainerViewController *enrollContainerController;
@property (copy, nonatomic) id /* block */ modalFlowSuccessCompletion;
@property (copy, nonatomic) id /* block */ modalFlowCancelCompletion;
@property (nonatomic) BOOL currentlyEnablingTouchIDForPurchases;
@property (retain, nonatomic) NSArray *storedBiometricTemplates;
@property (readonly, nonatomic) unsigned long long currentBiometricTemplateFetchStatus;
@property (nonatomic) BOOL isObservingBiometricTemplateFetchingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPresentInModalSheet;

- (void)viewWillAppear:(BOOL)a0;
- (id)authorizationToken;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)didUnlock;
- (void)hideCancelButton;
- (void).cxx_destruct;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (id)init;
- (void)didCancelEnteringPIN;
- (void)fetchBiometricTemplateUUIDsWithCompletion:(id /* block */)a0;
- (void)setupBiometricLogoHeader;
- (void)enrollBiometric;
- (void)presentPasscodePaneFromSpecifier:(id)a0;
- (id)isTouchIDUnlockEnabled:(id)a0;
- (BOOL)hasPasscodeAndBiometric;
- (BOOL)isTouchIDUnlockRestricted;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id /* block */)a0;
- (BOOL)shouldRestrictFeaturesRequiringEnrollment;
- (void)updateStoreBiometricsState;
- (BOOL)isTouchIDForPurchasesRestricted;
- (id)biometricNameDescription;
- (void)proceedTouchIDForStockholmEnabled:(id)a0 specifier:(id)a1;
- (BOOL)isTouchIDForStockholmRestricted;
- (BOOL)isBiometricEditingAllowed;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (id)headerForUseBiometricSection;
- (void)setBiometricUnlockEnabled:(id)a0 specifier:(id)a1;
- (void)setTouchIDForPurchasesEnabled:(id)a0 specifier:(id)a1;
- (id)isTouchIDForPurchasesEnabled:(id)a0;
- (void)setTouchIDForStockholmEnabled:(id)a0 specifier:(id)a1;
- (id)isTouchIDForStockholmEnabled:(id)a0;
- (void)setSafariAutoFillEnabled:(id)a0 specifier:(id)a1;
- (id)safariAutoFillEnabled:(id)a0;
- (BOOL)isSafariAutofillRestricted;
- (void)presentSheetForContentViewController:(id)a0 completion:(id /* block */)a1;
- (id)_passcodeControllerForSpecifier:(id)a0;
- (id)passcodeController;
- (void)_popEnrollmentControllerWithCompletion:(id /* block */)a0;
- (void)enrollmentControllerDidDismiss;
- (void)completeModalFlow;
- (void)cancelModalFlowWithCompletion:(id /* block */)a0;
- (void)deleteGlobalAuthACL;
- (void)updateWithReplacedUUIDs:(id)a0;
- (BOOL)isPhoneUnlockEnabled;
- (void)updateTouchIDUnlockSpecifier;
- (void)updateTouchIDForPurchasesSpecifier;
- (void)updateTouchIDForStockholmSpecifier;
- (BOOL)isEnrollmentAvailable;
- (id)useBiometricForSpecifiers;
- (void)presentSheetForContentViewController:(id)a0;
- (void)pushPasscodePane;
- (void)enrollmentCompletedForIdentity:(id)a0;

@end
