@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {
    EDTable *mTable;
    unsigned long long mHeaderRowCount;
    unsigned long long mTotalsRowCount;
}

- (void)clearCache;
- (void).cxx_destruct;
- (BOOL)isObjectSupported:(id)a0;
- (int)stripeOffset:(int)a0 row:(BOOL)a1;
- (void)cacheSizes:(id)a0 inObject:(id)a1;
- (id)collectionFromWorksheet:(id)a0;
- (id)styleFromObject:(id)a0;
- (id)newExtractedRowStyleElements:(id)a0 parentScope:(id)a1 row:(int)a2;
- (id)newExtractedCellStyleElements:(id)a0 parentScope:(id)a1 row:(int)a2 column:(int)a3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (int)borderFlagsForStyleType:(int)a0 row:(int)a1 column:(int)a2;
- (id)newExtractedGlobalStyleElements:(id)a0;

@end
