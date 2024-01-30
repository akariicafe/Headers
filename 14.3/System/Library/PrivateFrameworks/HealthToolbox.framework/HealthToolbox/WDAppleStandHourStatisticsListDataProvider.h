@class NSMutableDictionary, NSDateFormatter, NSMutableArray, HKDisplayTypeValueFormatter;

@interface WDAppleStandHourStatisticsListDataProvider : WDSampleListDataProvider {
    NSMutableArray *_orderedTimePeriods;
    NSMutableDictionary *_totalsByTimePeriod;
    HKDisplayTypeValueFormatter *_valueFormatter;
    NSDateFormatter *_dateFormatter;
}

- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (long long)cellStyle;
- (void)deleteAllData;
- (id)titleForSection:(unsigned long long)a0;
- (id)sampleTypes;
- (void)_callUpdateHandler;
- (id)predicateForType:(id)a0;
- (id)textForObject:(id)a0;
- (id)secondaryTextForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (void)_removeSamplesInDateRange:(id)a0;
- (id)_samplesSortDescriptor;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (void)deleteObjectsAtIndexPath:(id)a0 healthStore:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;

@end
