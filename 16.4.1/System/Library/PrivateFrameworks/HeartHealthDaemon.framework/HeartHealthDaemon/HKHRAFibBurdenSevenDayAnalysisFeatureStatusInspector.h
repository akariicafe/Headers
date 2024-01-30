@class HDFeatureAvailabilityOnboardingEligibilityDeterminer;

@interface HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspector : NSObject <HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> {
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;
}

- (BOOL)shouldAllowAnalysisWithFeatureStatus:(id)a0;
- (id)pairedDevices;
- (void).cxx_destruct;
- (id)initWithOnboardingEligibilityDeterminer:(id)a0;

@end
