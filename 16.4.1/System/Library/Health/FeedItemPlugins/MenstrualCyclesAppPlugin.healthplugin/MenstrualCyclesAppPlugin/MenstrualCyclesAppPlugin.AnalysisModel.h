@interface MenstrualCyclesAppPlugin.AnalysisModel : NSObject <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ isOnboardingCompleted;
    void /* unknown type, empty encoding */ _fertileWindowPredictionsForceDisabled;
    void /* unknown type, empty encoding */ _periodPredictionsForceDisabled;
    void /* unknown type, empty encoding */ _deviationDetectionForceDisabled;
}

- (id)init;
- (void).cxx_destruct;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
