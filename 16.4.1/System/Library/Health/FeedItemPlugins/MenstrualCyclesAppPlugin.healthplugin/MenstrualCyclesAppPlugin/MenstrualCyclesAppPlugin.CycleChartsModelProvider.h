@interface MenstrualCyclesAppPlugin.CycleChartsModelProvider : _TtCs12_SwiftObject <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ dayProvider;
    void /* unknown type, empty encoding */ sleepingWristTemperatureRange;
    void /* unknown type, empty encoding */ healthStoreInfo;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ currentCalendar;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ preferredMaxLayoutWidth;
    void /* unknown type, empty encoding */ _predominantCycle;
    void /* unknown type, empty encoding */ _model;
    void /* unknown type, empty encoding */ cycles;
    void /* unknown type, empty encoding */ basalBodyTemperatureRange;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)significantTimeChangeDidOccur;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
