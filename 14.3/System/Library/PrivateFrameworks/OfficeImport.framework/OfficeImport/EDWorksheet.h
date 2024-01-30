@class EDPane, EDWarnings, EDRowBlocks, NSMutableDictionary, EDMergedCellCollection, EDReference, EDCollection, EDColumnInfoCollection;

@interface EDWorksheet : EDSheet {
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long long mMaxRowOutlineLevel;
    unsigned long long mMaxColumnOutlineLevel;
    BOOL mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    NSMutableDictionary *mMergedRows;
    NSMutableDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}

- (id)pane;
- (void)setup;
- (void)teardown;
- (void)setPane:(id)a0;
- (void).cxx_destruct;
- (id)tables;
- (id)description;
- (unsigned short)defaultRowHeight;
- (id)mergedCells;
- (id)rowBlocks;
- (double)defaultColumnWidth;
- (id)columnInfos;
- (id)maxCellReferencedInFormulas;
- (id)hyperlinks;
- (id)conditionalFormattings;
- (void)setDefaultColumnWidth:(double)a0;
- (void)setDefaultRowHeight:(unsigned short)a0;
- (void)setFitToPage:(BOOL)a0;
- (void)setMaxRowOutlineLevel:(unsigned long long)a0;
- (void)setMaxColumnOutlineLevel:(unsigned long long)a0;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)a0;
- (void)reduceMemoryIfPossible;
- (BOOL)fitToPage;
- (id)pivotTables;
- (id)worksheetWarnings;
- (BOOL)hasMergedCells;
- (unsigned long long)maxRowOutlineLevel;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)a0;
- (unsigned long long)maxColumnOutlineLevel;
- (void)setMergedRowsRef:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (void)setMergedColsRef:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (BOOL)hasMergedRow;
- (BOOL)isRowMerged:(unsigned int)a0;
- (id)mergedRowRef:(unsigned int)a0;
- (BOOL)hasMergedCol;
- (BOOL)isColMerged:(unsigned int)a0;
- (id)mergedColRef:(unsigned int)a0;
- (id)implicitCellArea;
- (void)setImplicitCellArea:(id)a0;

@end
