@interface MenstrualCyclesAppPlugin.CycleFactorsDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ availability;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
