@class NSMutableArray, NSArray, EDWorksheet, EDRowBlock, ECIntToTwoIntKeyCache, EDColumnInfoCollection, EDRowBlocks;

@interface EPStyleFlattener : EDProcessor {
    EDWorksheet *mWorksheet;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    EDColumnInfoCollection *mColumnInfos;
    NSArray *mKeys;
    NSMutableArray *mRanges;
    ECIntToTwoIntKeyCache *mFlattenedStyleCache;
    ECIntToTwoIntKeyCache *mFillCache;
    int mFirstRow;
    int mLastRow;
    int mFirstColumn;
    int mLastColumn;
    unsigned int mFirstRowStripeSize;
    unsigned int mSecondRowStripeSize;
    unsigned int mFirstColumnStripeSize;
    unsigned int mSecondColumnStripeSize;
}

- (void)clearCache;
- (void).cxx_destruct;
- (void)applyDifferentialStyle:(id)a0 borderFlags:(int)a1 precedence:(unsigned long long)a2 toCell:(struct EDCellHeader **)a3 row:(int)a4 column:(int)a5;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (void)applyStyleElements:(id)a0 toCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a1 row:(int)a2 column:(int)a3;
- (int)borderFlagsForStyleType:(int)a0 row:(int)a1 column:(int)a2;
- (void)cacheRange:(id)a0;
- (void)cacheSizes:(id)a0 inObject:(id)a1;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)cellWithSetupStyleAtRowNumber:(int)a0 columnNumber:(int)a1;
- (id)collectionFromWorksheet:(id)a0;
- (id)copyFlattenBorder:(int)a0 borders:(id)a1 differentialBorders:(id)a2 flag:(BOOL)a3 precedence:(unsigned long long)a4 row:(int)a5 column:(int)a6;
- (id)copyFlattenBorders:(id)a0 differentialBorders:(id)a1 borderFlags:(int)a2 precedence:(unsigned long long)a3 row:(int)a4 column:(int)a5;
- (id)copyFlattenFont:(id)a0 differentialFont:(id)a1;
- (unsigned long long)flattenFillIndex:(unsigned long long)a0 differentialFill:(id)a1;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)a0 parentScope:(id)a1 row:(int)a2 column:(int)a3;
- (id)newExtractedGlobalStyleElements:(id)a0;
- (id)newExtractedKeys:(id)a0 from:(id)a1 parent:(id)a2;
- (id)newExtractedRowStyleElements:(id)a0 parentScope:(id)a1 row:(int)a2;
- (void)processObject:(id)a0;
- (id)styleFromObject:(id)a0;
- (id)wrapDifferentialStyleInATableStyleElement:(id)a0 type:(int)a1;

@end
