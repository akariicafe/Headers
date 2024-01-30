@class NSMutableDictionary, NSMutableArray, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
}

@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (BOOL)removeSample:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)count;
- (BOOL)insertSamples:(id)a0;
- (id)sampleAtIndex:(long long)a0;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)a0;
- (BOOL)removeSampleAtIndex:(long long)a0;
- (BOOL)removeSamplesWithUUIDs:(id)a0;
- (void)removeAllSamples;
- (id)sampleEnumerator;
- (id)reverseSampleEnumerator;
- (id)allSamples;

@end
