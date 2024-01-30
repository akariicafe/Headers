@class NSString;

@interface HRUIAnalyticsManager : NSObject

@property (nonatomic) long long currentAtrialFibrillationOnboardingStep;
@property (nonatomic) long long currentElectrocardiogramOnboardingStep;
@property (retain, nonatomic) NSString *productType;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_pdfSharedStringFromProvenance:(unsigned long long)a0;
- (void)trackElectrocardiogramPDFViewed;
- (void)trackElectrocardiogramPDFShared;
- (void)_sendAnalyticsEvent:(id)a0 withPayload:(id)a1;
- (id)_stringAlgorithmVersionFromOnboardingVersion:(id)a0;
- (id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(long long)a0;
- (id)_stringFromHRUIElectrocardiogramOnboardingStep:(long long)a0;
- (id)_stringFromOnboardingType:(long long)a0;
- (id)_stringFromOnboardingVersion:(id)a0;
- (id)_stringFromProvenance:(long long)a0;
- (void)trackAtrialFibrillationDetectionOnboardingStep:(long long)a0 forOnboardingVersion:(long long)a1 countryCode:(id)a2 provenance:(long long)a3;
- (void)trackElectrocardiogramDataTypeViewed;
- (void)trackElectrocardiogramOnboardingStep:(long long)a0 forOnboardingType:(long long)a1 onboardingVersion:(id)a2 countryCode:(id)a3 provenance:(long long)a4;
- (void)trackElectrocardiogramPDFSharedFrom:(unsigned long long)a0;

@end
