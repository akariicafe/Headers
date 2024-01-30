@interface HealthMedicationsUI.MedicationChartDataSource : HKHealthQueryChartCacheDataSource {
    void /* unknown type, empty encoding */ medication;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ sortDescriptors;
}

- (id)init;
- (void).cxx_destruct;
- (id)queryDescription;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;

@end
