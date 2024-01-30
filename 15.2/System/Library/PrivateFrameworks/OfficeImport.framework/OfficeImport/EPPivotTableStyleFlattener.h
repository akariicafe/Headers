@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener {
    EDPivotTable *mPivotTable;
    long long mFirstHeaderRow;
    long long mFirstDataRow;
    long long mFirstDataColumn;
    unsigned long long mRowFieldsCount;
    unsigned long long mColumnFieldsCount;
    unsigned long long mPageFieldsCount;
}

- (void)clearCache;
- (void).cxx_destruct;
- (BOOL)isObjectSupported:(id)a0;
- (int)stripeOffset:(int)a0 row:(BOOL)a1;
- (void)addRowSubheadingLevel:(unsigned int)a0 to:(id)a1;
- (void)addSubtotalRowLevel:(unsigned int)a0 to:(id)a1;
- (void)addColumnSubheadingLevel:(unsigned int)a0 to:(id)a1;
- (void)addSubtotalColumnLevel:(unsigned int)a0 to:(id)a1;
- (void)cacheSizes:(id)a0 inObject:(id)a1;
- (id)collectionFromWorksheet:(id)a0;
- (id)styleFromObject:(id)a0;
- (id)newExtractedRowStyleElements:(id)a0 parentScope:(id)a1 row:(int)a2;
- (id)newExtractedCellStyleElements:(id)a0 parentScope:(id)a1 row:(int)a2 column:(int)a3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (int)borderFlagsForStyleType:(int)a0 row:(int)a1 column:(int)a2;
- (unsigned int)constrainLevel:(unsigned int)a0;

@end
