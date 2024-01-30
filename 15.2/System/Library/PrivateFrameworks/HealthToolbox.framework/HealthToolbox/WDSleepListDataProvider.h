@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}

- (id)sampleTypes;
- (unsigned long long)numberOfSections;
- (long long)cellStyle;
- (void)deleteAllData;
- (id)_durationFormatter;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (void)_callUpdateHandler;
- (id)textForObject:(id)a0;
- (id)secondaryTextForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)_sleepDataDictionaryFromSamples:(id)a0;
- (id)_sleepSampleAtIndex:(unsigned long long)a0 section:(unsigned long long)a1;

@end
