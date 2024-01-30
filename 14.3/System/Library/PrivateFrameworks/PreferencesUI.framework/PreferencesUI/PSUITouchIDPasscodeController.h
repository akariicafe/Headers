@class BiometricKit, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate>

@property (retain, nonatomic) BiometricKit *highlightMatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)statusMessage:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)suspend;
- (void)matchResult:(id)a0;
- (void)enrollResult:(int)a0 identity:(id)a1;
- (void)enrollResult:(int)a0 bkIdentity:(id)a1;
- (void)enrollBiometric;
- (id)biometricLogo;
- (id)headerForUseBiometricSection;
- (void)enrollmentControllerDidDismiss;
- (void)cancelModalFlowWithCompletion:(id /* block */)a0;
- (void)cancelModalFlow;
- (void)_setupMatching;
- (void)_cancelMatching;
- (id)fingerprintSpecifiers;
- (id)_fingerprintSpecifierForIdentity:(id)a0;
- (void)addEnrollment:(id)a0;
- (void)updateAddFingerprintSpecifier;
- (void)highlightFingerprintSpecifier:(id)a0;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)a0;

@end
