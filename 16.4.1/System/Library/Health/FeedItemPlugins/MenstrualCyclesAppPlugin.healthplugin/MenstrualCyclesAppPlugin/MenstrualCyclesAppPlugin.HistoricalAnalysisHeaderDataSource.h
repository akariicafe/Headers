@interface MenstrualCyclesAppPlugin.HistoricalAnalysisHeaderDataSource : MenstrualCyclesAppPlugin.RoomDataSource <HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ headerItem;
}

- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;

@end
