@interface Heart.SummariesElectrocardiogramListDataProvider : WDElectrocardiogramListDataProvider {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataFetcher;
}

@property (nonatomic, readonly) BOOL hasCompleteDataSet;
@property (nonatomic, readonly) BOOL calendarDateSelectorVisible;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (id)activeECGAlgorithmVersion;
- (id)createDataFetcherForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;

@end
