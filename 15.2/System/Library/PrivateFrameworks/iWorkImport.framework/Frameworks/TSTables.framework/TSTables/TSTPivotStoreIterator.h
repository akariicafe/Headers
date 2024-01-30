@class TSTTableDataStore, TSTTableTileRowInfo, TSTPivotTranslator, TSTCell;

@interface TSTPivotStoreIterator : TSTCategoryStoreIterator {
    struct TSUViewCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _coord; } _currentViewCellID;
    struct TSUModelCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _coord; } _currentBaseCellID;
    struct TSUModelCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _coord; } _currentSummaryCellID;
    BOOL _currentCellIDIsBase;
    unsigned int _currentRowIndex;
    TSTCell *_cell;
    TSTTableDataStore *_baseDataStore;
    TSTTableDataStore *_summaryDataStore;
    TSTTableTileRowInfo *_baseRow;
    TSTTableTileRowInfo *_summaryRow;
    TSTPivotTranslator *_translator;
}

- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (id)initWithInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)updateCellData:(id)a0;
- (void)updateFormulaForCellData:(id)a0;

@end
