@class EDCollection, EDWorkbook, EDWorksheet, EDRowBlock, EDReference, EDRowBlocks;

@interface EDReferenceIterator : NSObject {
    EDWorkbook *mWorkbook;
    EDWorksheet *mCurrentSheet;
    EDCollection *mReferences;
    EDReference *mReference;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mRowBlock;
    unsigned long long mRowBlockIndex;
    struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (id)referenceIteratorWithReference:(id)a0 workbook:(id)a1;
+ (id)referenceIteratorWithReferenceArray:(id)a0 workbook:(id)a1;

- (void)setReference:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)nextRow;
- (unsigned int)currentCellIndex;
- (id)initWithReference:(id)a0 workbook:(id)a1;
- (id)initWithReferenceArray:(id)a0 reference:(id)a1 workbook:(id)a2;
- (id)initWithReferenceArray:(id)a0 workbook:(id)a1;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)nextCell;
- (BOOL)nextReference;
- (void)setCurrentSheet:(id)a0;

@end
