@class NSMutableArray;

@interface TSCEUndoTractList : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray *_tracts;
}

@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)saveToArchive:(void *)a0;
- (int)flatteningDimension;
- (BOOL)remapUsingUidMap:(const void *)a0;
- (BOOL)remapUsingColumnUidMap:(const void *)a0 rowUidMap:(const void *)a1 clearIfMissing:(BOOL)a2;
- (void)appendUidTract:(id)a0;
- (id)firstTractWithPurpose:(unsigned char)a0;
- (void)addToIncludedUidsTractColumnUids:(const void *)a0 rowUids:(const void *)a1;
- (id)includedUidsTract;
- (void)dropTract:(id)a0;
- (void)addTractAtFront:(id)a0;
- (void)addToIncludedUidsTractColumnUids:(const void *)a0 rowUids:(const void *)a1 isRangeRef:(BOOL)a2 preserveRectangularRange:(BOOL)a3;
- (id)excludedUidsTract;
- (void)removeFromExcludedUidsTractColumnUidsSet:(const void *)a0;
- (void)removeFromExcludedUidsTractRowUidsSet:(const void *)a0;
- (unsigned char)tractCount;
- (id)preMergeUidTract;
- (id)preMoveRegionUidTract;
- (id)activeUidTract;
- (id)removedByMoveUidTract;
- (void)addToIncludedUidsTractColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 rowUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)addToExcludedUidsTractColumnUids:(const void *)a0;
- (void)addToExcludedUidsTractRowUids:(const void *)a0;
- (void)addToExcludedTractUids:(const void *)a0 isRows:(BOOL)a1;
- (void)removeFromExcludedUidsTractColumnUids:(const void *)a0;
- (void)removeFromExcludedUidsTractRowUids:(const void *)a0;
- (id)uidTractAtIndex:(unsigned char)a0;
- (void)pruneMergeUidTractsAtAndAboveIndex:(unsigned char)a0;
- (id)initAsFullTupleForColumnHeaderUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 rowHeaderUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 aggregateRuleUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2 flatteningDimension:(int)a3;
- (void)addRowColumnRuleValuePair:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 valueUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)hasFullTupleInformation;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })columnHeaderUid;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })rowHeaderUid;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })aggregateRuleUid;
- (void)enumerateRowColumnRuleValuePairsUsingBlock:(id /* block */)a0;

@end
