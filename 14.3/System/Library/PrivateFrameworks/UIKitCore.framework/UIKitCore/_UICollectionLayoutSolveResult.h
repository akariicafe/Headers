@class NSIndexSet, NSSet, NSString, NSMutableIndexSet, NSMutableDictionary;

@interface _UICollectionLayoutSolveResult : NSObject <_UICollectionLayoutSolveResult> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}

@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetAdjustment;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addInvalidatedItemIndex:(long long)a0;
- (void)addInvalidatedItemIndexes:(id)a0;
- (id)indexesForInvalidatedAuxillariesOfKind:(id)a0;
- (void)addInvalidatedAuxillaryOfKind:(id)a0 index:(long long)a1;
- (void)addInvalidatedItemIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)invalidatedAuxillaryOffsets;
- (void)addInvalidatedAuxillaryOfKind:(id)a0 indexes:(id)a1;
- (void)addInvalidatedSupplementariesWithOffsets:(id)a0;

@end
