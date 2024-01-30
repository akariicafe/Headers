@interface HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource <HKCurrentValueViewDataSourceDelegate> {
    void /* unknown type, empty encoding */ lastCachedNumberOfChartPoints;
}

- (id)init;
- (id)initWithDateCache:(id)a0 displayCategoryController:(id)a1 healthStore:(id)a2 selectedRangeFormatter:(id)a3;
- (void)updateDataSourceWithGraphView:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (id)titleFor:(id)a0;

@end
