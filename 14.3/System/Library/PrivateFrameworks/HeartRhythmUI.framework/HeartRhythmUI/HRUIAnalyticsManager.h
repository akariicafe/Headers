@interface HRUIAnalyticsManager : NSObject

@property (nonatomic) long long currentAtrialFibrillationOnboardingStep;
@property (nonatomic) long long currentElectrocardiogramOnboardingStep;

+ (id)sharedManager;

- (id)init;
- (void)trackElectrocardiogramPDFViewed;
- (void)trackElectrocardiogramDataTypeViewed;
- (void)trackElectrocardiogramPDFShared;
- (void)trackAtrialFibrillationDetectionOnboardingStep:(long long)a0 forOnboardingVersion:(long long)a1 productType:(id)a2 countryCode:(id)a3 provenance:(long long)a4;
- (id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(long long)a0;
- (id)_stringFromProvenance:(long long)a0;
- (void)_sendAnalyticsEvent:(id)a0 withPayload:(id)a1;
- (id)_stringAlgorithmVersionFromOnboardingVersion:(long long)a0;
- (id)_stringFromOnboardingType:(long long)a0;
- (id)_stringFromHRUIElectrocardiogramOnboardingStep:(long long)a0;
- (void)trackElectrocardiogramOnboardingStep:(long long)a0 forOnboardingType:(long long)a1 onboardingVersion:(long long)a2 productType:(id)a3 countryCode:(id)a4 provenance:(long long)a5;

@end
