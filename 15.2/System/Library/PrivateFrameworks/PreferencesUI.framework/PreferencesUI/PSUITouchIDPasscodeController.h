@class BiometricKit, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate>

@property (retain, nonatomic) BiometricKit *highlightMatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewDidDisappear:(BOOL)a0;
- (void)statusMessage:(unsigned int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)matchResult:(id)a0;
- (void)enrollResult:(int)a0 identity:(id)a1;
- (void)enrollResult:(int)a0 bkIdentity:(id)a1;
- (void)enrollBiometric;
- (id)biometricNameDescription;
- (id)biometricLogo;
- (id)headerForUseBiometricSection;
- (void)enrollmentControllerDidDismiss;
- (void)cancelModalFlowWithCompletion:(id /* block */)a0;
- (void)updateWithReplacedUUIDs:(id)a0;
- (void)cancelModalFlow;
- (void)biometricBindingDeleted;
- (void)_setupMatching;
- (void)configureBiometricTemplateMatching;
- (void)_cancelMatching;
- (void)matchBiometricIdentitiesWithBiometricTemplates;
- (BOOL)isBiometricIdentityMatchingGovernmentIDTemplate:(id)a0;
- (id)fingerprintSpecifiers;
- (id)_fingerprintSpecifierForIdentity:(id)a0;
- (void)addEnrollment:(id)a0;
- (void)updateAddFingerprintSpecifier;
- (void)highlightFingerprintSpecifier:(id)a0;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)a0;

@end
