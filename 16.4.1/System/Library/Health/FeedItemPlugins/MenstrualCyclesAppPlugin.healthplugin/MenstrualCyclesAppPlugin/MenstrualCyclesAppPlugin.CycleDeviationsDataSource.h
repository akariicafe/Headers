@interface MenstrualCyclesAppPlugin.CycleDeviationsDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ displayConfiguration;
    void /* unknown type, empty encoding */ isMCOnboardingCompleted;
    void /* unknown type, empty encoding */ featureStatus;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ deviationsQueryTask;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tileHeaderItem;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
