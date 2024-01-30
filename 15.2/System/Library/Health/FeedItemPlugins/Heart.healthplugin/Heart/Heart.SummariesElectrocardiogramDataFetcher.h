@interface Heart.SummariesElectrocardiogramDataFetcher : NSObject <HKSampleListDataFetcher> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ queryData;
    void /* unknown type, empty encoding */ activeAlgorithmVersion;
    void /* unknown type, empty encoding */ resultsHandler;
}

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
