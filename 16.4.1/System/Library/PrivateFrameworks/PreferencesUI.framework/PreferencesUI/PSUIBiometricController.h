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

- (void)didCancelEnteringPIN;
- (id)init;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didUnlock;
- (id)authorizationToken;
- (void)hideCancelButton;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)deleteGlobalAuthACL;
- (void)enrollmentCompletedForIdentity:(id)a0;
- (BOOL)isTouchIDForPurchasesRestricted;
- (void)enrollBiometric;
- (BOOL)isTouchIDForStockholmRestricted;
- (id)_passcodeControllerForSpecifier:(id)a0;
- (void)_popEnrollmentControllerWithCompletion:(id /* block */)a0;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id /* block */)a0;
- (id)biometricLogo;
- (id)biometricNameDescription;
- (id)biometricTableViewHeader;
- (void)cancelModalFlowWithCompletion:(id /* block */)a0;
- (void)completeModalFlow;
- (void)enrollmentControllerDidDismiss;
- (void)fetchBiometricTemplateUUIDsWithCompletion:(id /* block */)a0;
- (BOOL)hasPasscodeAndBiometric;
- (id)headerForUseBiometricSection;
- (BOOL)isBiometricEditingAllowed;
- (BOOL)isEnrollmentAvailable;
- (BOOL)isPhoneUnlockEnabled;
- (BOOL)isSafariAutofillRestricted;
- (id)isTouchIDForPurchasesEnabled:(id)a0;
- (id)isTouchIDForStockholmEnabled:(id)a0;
- (id)isTouchIDUnlockEnabled:(id)a0;
- (BOOL)isTouchIDUnlockRestricted;
- (id)passcodeController;
- (void)presentPasscodePaneFromSpecifier:(id)a0;
- (void)presentSheetForContentViewController:(id)a0;
- (void)presentSheetForContentViewController:(id)a0 completion:(id /* block */)a1;
- (void)proceedTouchIDForStockholmEnabled:(id)a0 specifier:(id)a1;
- (void)pushPasscodePane;
- (id)safariAutoFillEnabled:(id)a0;
- (void)setBiometricUnlockEnabled:(id)a0 specifier:(id)a1;
- (void)setSafariAutoFillEnabled:(id)a0 specifier:(id)a1;
- (void)setTouchIDForPurchasesEnabled:(id)a0 specifier:(id)a1;
- (void)setTouchIDForStockholmEnabled:(id)a0 specifier:(id)a1;
- (void)setupBiometricLogoHeader;
- (BOOL)shouldRestrictFeaturesRequiringEnrollment;
- (void)updateStoreBiometricsState;
- (void)updateTouchIDForPurchasesSpecifier;
- (void)updateTouchIDForStockholmSpecifier;
- (void)updateTouchIDUnlockSpecifier;
- (void)updateWithReplacedUUIDs:(id)a0;
- (id)useBiometricForSpecifiers;

@end
