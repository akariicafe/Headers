@class NSIndexSet, TSPObject, TSTTableHeaderStorageBucket;

@interface TSTTableHeaderStorage : TSPContainedObject <TSTCompatibilityVersionProviding> {
    TSTTableHeaderStorageBucket *_buckets[16];
    unsigned long long _bucketCount;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned int minIndex;
@property (readonly, nonatomic) unsigned int maxIndex;
@property (readonly, nonatomic) NSIndexSet *populatedIndexes;
@property (readonly, nonatomic) TSPObject *firstBucketForArchiving;
@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion;

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)reset;
- (double)sizeAtIndex:(unsigned int)a0;
- (void)swapIndex:(unsigned int)a0 withIndex:(unsigned int)a1;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)_headerAtIndex:(unsigned int)a0;
- (id)_mutableHeaderAtIndex:(unsigned int)a0;
- (void)_setHeader:(id)a0 atIndex:(unsigned int)a1;
- (void)shiftIndexesForwardAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)p_allocateBuckets;
- (void)shiftIndexesBackAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (id)_mutableNoCreateHeaderAtIndex:(unsigned int)a0;
- (id)initWithBucket:(id)a0 owner:(id)a1;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1 owner:(id)a2;
- (id)metadataAtIndex:(unsigned int)a0 hidingAction:(unsigned char)a1 defaultSize:(double)a2 uuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a3;
- (void)updateHeaderAtIndex:(unsigned int)a0 fromMetadata:(id)a1;
- (void)removeIndexesAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)moveIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned int)a1;
- (void)setSize:(double)a0 atIndex:(unsigned int)a1;
- (unsigned char)hidingStateAtIndex:(unsigned int)a0;
- (void)setHidingState:(unsigned char)a0 atIndex:(unsigned int)a1;
- (id)cellStyleAtIndex:(unsigned int)a0;
- (void)setCellStyle:(id)a0 atIndex:(unsigned int)a1;
- (id)textStyleAtIndex:(unsigned int)a0;
- (void)setTextStyle:(id)a0 atIndex:(unsigned int)a1;
- (void)updateStylesWithBlock:(id /* block */)a0;
- (unsigned long long)cellCountAtIndex:(unsigned int)a0;
- (void)decrementCellCountAtIndex:(unsigned int)a0 byAmount:(unsigned long long)a1;
- (void)incrementCellCountAtIndex:(unsigned int)a0 byAmount:(unsigned long long)a1;
- (void)resetAllCellCounts;
- (unsigned long long)totalCellCount;
- (void)forceLoadHeaders;

@end
