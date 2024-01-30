@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}

- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (long long)cellStyle;
- (void)deleteAllData;
- (id)titleForSection:(unsigned long long)a0;
- (id)_durationFormatter;
- (id)sampleTypes;
- (void)_callUpdateHandler;
- (id)textForObject:(id)a0;
- (id)secondaryTextForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)_sleepDataDictionaryFromSamples:(id)a0;
- (id)_sleepSampleAtIndex:(unsigned long long)a0 section:(unsigned long long)a1;

@end
