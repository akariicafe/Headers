@interface MenstrualCyclesAppPlugin.CycleHistoryDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ containerWidth;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ $__lazy_storage_$_today;
    void /* unknown type, empty encoding */ isOnboardingCompleted;
    void /* unknown type, empty encoding */ viewModelProviders;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (void)significantTimeChangeDidOccur:(id)a0;

@end
