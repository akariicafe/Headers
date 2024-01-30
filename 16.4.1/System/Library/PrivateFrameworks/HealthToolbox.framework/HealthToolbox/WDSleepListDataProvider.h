@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}

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
- (id)_sleepSampleAtIndex:(unsigned long long)a0 section:(unsigned long long)a1;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)secondaryTextForObject:(id)a0;

@end
