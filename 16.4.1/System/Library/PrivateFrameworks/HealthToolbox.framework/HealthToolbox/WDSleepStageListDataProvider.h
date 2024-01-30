@class NSMutableDictionary, NSMutableArray;

@interface WDSleepStageListDataProvider : WDSampleListDataProvider

@property (readonly, nonatomic) NSMutableDictionary *sleepData;
@property (readonly, nonatomic) NSMutableArray *orderedKeys;

- (void)deleteAllData;
- (long long)cellStyle;
- (unsigned long long)numberOfSections;
- (id)sampleTypes;
- (void).cxx_destruct;
- (id)_durationFormatter;
- (id)titleForSection:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (void)_callUpdateHandler;
- (id)_sleepDataDictionaryFromSamples:(id)a0;
- (id)_sleepSampleBucketAtIndex:(unsigned long long)a0 section:(unsigned long long)a1;
- (void)deleteObjectsAtIndexPath:(id)a0 healthStore:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)secondaryTextForObject:(id)a0;

@end
