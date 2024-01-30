@class NSString;

@interface BYCapabilities : NSObject <BYCapabilities>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCapabilities;

- (BOOL)supportsApplePay;
- (BOOL)supportsTouchID;
- (BOOL)isPearlEnrolled;
- (id)_paymentScreenRequirements;
- (BOOL)_paymentScreenRequirementsIncludePasscode:(id)a0;
- (BOOL)_paymentScreenRequirementsIncludeiCloud:(id)a0;
- (BOOL)canShowAppleIDScreen;
- (BOOL)canShowFaceIDScreen;
- (BOOL)canShowPasscodeScreen;
- (BOOL)canShowPaymentScreen;
- (BOOL)canShowSiriScreen;
- (BOOL)canShowTouchIDScreen;
- (BOOL)hasEligibleEnrolledIdentityForPeriocularFaceIDEnrollment;
- (BOOL)isCloudAnalyticsRestricted;
- (BOOL)isDeviceAnalyticsRestricted;
- (BOOL)isScreenTimeRestricted;
- (BOOL)isSiriRestricted;
- (BOOL)isTouchIDEnrolled;
- (BOOL)mgHasCellularData;
- (BOOL)mgHasCellularTelephony;
- (BOOL)mgHasGreenTea;
- (BOOL)mgHasMesa;
- (BOOL)mgHasSecureElement;
- (BOOL)mgHasSiriCapability;
- (BOOL)supportsAppleWatch;
- (BOOL)supportsKappaDetection;
- (BOOL)supportsPearl;
- (BOOL)supportsPeriocularFaceID;

@end
