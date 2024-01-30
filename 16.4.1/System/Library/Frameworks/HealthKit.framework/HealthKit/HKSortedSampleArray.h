@class NSMutableDictionary, NSMutableArray, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
}

@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)a0;
- (id)allSamples;
- (BOOL)insertSamples:(id)a0;
- (void)removeAllSamples;
- (BOOL)removeSample:(id)a0;
- (BOOL)removeSampleAtIndex:(long long)a0;
- (BOOL)removeSamplesWithUUIDs:(id)a0;
- (id)reverseSampleEnumerator;
- (id)sampleAtIndex:(long long)a0;
- (id)sampleEnumerator;

@end
