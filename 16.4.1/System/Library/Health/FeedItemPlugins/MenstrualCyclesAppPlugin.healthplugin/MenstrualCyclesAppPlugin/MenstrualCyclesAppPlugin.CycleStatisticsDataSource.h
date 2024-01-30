@interface MenstrualCyclesAppPlugin.CycleStatisticsDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ $__lazy_storage_$_daysFormatter;
    void /* unknown type, empty encoding */ isOnboardingCompleted;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
