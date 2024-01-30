@interface BYCapabilities : NSObject

+ (id)sharedCapabilities;

- (BOOL)supportsApplePay;
- (BOOL)mgHasMesa;
- (BOOL)supportsPearl;
- (BOOL)mgHasSecureElement;
- (BOOL)mgHasSiriCapability;
- (id)_paymentScreenRequirements;
- (BOOL)_paymentScreenRequirementsIncludePasscode:(id)a0;
- (BOOL)canShowPasscodeScreen;
- (BOOL)_paymentScreenRequirementsIncludeiCloud:(id)a0;
- (BOOL)canShowAppleIDScreen;
- (BOOL)isPearlEnrolled;
- (BOOL)supportsAppleWatch;
- (BOOL)canShowSiriScreen;
- (BOOL)canShowPaymentScreen;
- (BOOL)canShowTouchIDScreen;
- (BOOL)canShowFaceIDScreen;
- (BOOL)mgHasCellularTelephony;
- (BOOL)mgHasGreenTea;

@end
