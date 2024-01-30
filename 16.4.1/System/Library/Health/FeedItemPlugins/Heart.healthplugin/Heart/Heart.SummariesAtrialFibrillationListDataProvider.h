@interface Heart.SummariesAtrialFibrillationListDataProvider : WDAtrialFibrillationEventListDataProvider {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ healthExperienceStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)createDataFetcherForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;

@end
