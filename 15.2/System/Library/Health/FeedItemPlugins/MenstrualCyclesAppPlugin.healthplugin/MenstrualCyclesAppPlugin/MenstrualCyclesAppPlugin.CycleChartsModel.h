@interface MenstrualCyclesAppPlugin.CycleChartsModel : _TtCs12_SwiftObject <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ viewModelProvider;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ preferredBasalBodyTemperatureUnit;
    void /* unknown type, empty encoding */ cycles;
    void /* unknown type, empty encoding */ _currentPage;
}

- (void)significantTimeChangeDidOccur;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
