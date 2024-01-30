@class BiometricKit, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate>

@property (retain, nonatomic) BiometricKit *highlightMatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)suspend;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)statusMessage:(unsigned int)a0;
- (id)specifiers;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)matchResult:(id)a0;
- (void)enrollResult:(int)a0 bkIdentity:(id)a1;
- (void)enrollResult:(int)a0 identity:(id)a1;
- (void)_cancelMatching;
- (void)cancelModalFlow;
- (void)enrollBiometric;
- (id)_fingerprintSpecifierForIdentity:(id)a0;
- (void)_setupMatching;
- (void)addEnrollment:(id)a0;
- (void)biometricBindingDeleted;
- (id)biometricLogo;
- (id)biometricNameDescription;
- (void)cancelModalFlowWithCompletion:(id /* block */)a0;
- (void)configureBiometricTemplateMatching;
- (void)enrollmentControllerDidDismiss;
- (id)fingerprintSpecifiers;
- (id)headerForUseBiometricSection;
- (void)highlightFingerprintSpecifier:(id)a0;
- (BOOL)isBiometricIdentityMatchingGovernmentIDTemplate:(id)a0;
- (void)matchBiometricIdentitiesWithBiometricTemplates;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)a0;
- (void)updateAddFingerprintSpecifier;
- (void)updateWithReplacedUUIDs:(id)a0;

@end
