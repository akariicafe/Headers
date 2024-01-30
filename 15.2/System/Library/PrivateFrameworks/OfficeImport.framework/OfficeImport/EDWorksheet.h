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
- (void)teardown;
- (void)setPane:(id)a0;
- (id)tables;
- (void)setup;
- (id)description;
- (void).cxx_destruct;
- (unsigned short)defaultRowHeight;
- (void)setDefaultRowHeight:(unsigned short)a0;
- (id)conditionalFormattings;
- (id)hyperlinks;
- (id)mergedCells;
- (id)rowBlocks;
- (void)setDefaultColumnWidth:(double)a0;
- (void)setFitToPage:(BOOL)a0;
- (void)setMaxRowOutlineLevel:(unsigned long long)a0;
- (void)setMaxColumnOutlineLevel:(unsigned long long)a0;
- (double)defaultColumnWidth;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)a0;
- (void)reduceMemoryIfPossible;
- (BOOL)fitToPage;
- (id)columnInfos;
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
- (id)maxCellReferencedInFormulas;
- (id)implicitCellArea;
- (void)setImplicitCellArea:(id)a0;

@end
