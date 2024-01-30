@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {
    BOOL _isNonIncremental;
}

+ (BOOL)_mutableCopyInputs;
+ (id)changeDetailsWithNoIncrementalChanges;

- (void)_addRemovedIndexes:(id)a0;
- (void)_becomeNonIncremental;
- (void)_addInsertedIndexes:(id)a0;
- (void)_addRemovedIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addAdditionalRemovedIndex:(unsigned long long)a0 afterChangesIndex:(unsigned long long)a1;
- (void)_addInsertedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_updatePropertyChangesWithChangeDetails:(id)a0;
- (void)_addAdditionalRemovedIndexSet:(id)a0 afterChangesIndex:(id)a1;
- (void)addChangeDetails:(id)a0;
- (void)_updateChangedIndexesWithChangeDetails:(id)a0;
- (BOOL)hasIncrementalChanges;
- (void)_updateMovesWithChangesDetails:(id)a0;
- (void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)a0;

@end
