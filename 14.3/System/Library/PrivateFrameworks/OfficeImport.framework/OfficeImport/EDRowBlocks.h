@class EDCollection, NSString, EDWorksheet, NSRecursiveLock, NSMutableArray;

@interface EDRowBlocks : NSObject <TSUiOSMemoryWarningFlushable> {
    EDWorksheet *mWorksheet;
    NSMutableArray *mRowBlocks;
    EDCollection *mFormulas;
    unsigned int mMaxPopulatedRow;
    unsigned int mMaxPopulatedColumn;
    NSString *mFileName;
    int mLockCount;
    NSRecursiveLock *mSaveLoadLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (void)load;
- (void)lock;
- (void).cxx_destruct;
- (void)save;
- (void)dealloc;
- (void)flush;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)cellWithRowNumber:(unsigned int)a0 columnNumber:(int)a1;
- (unsigned long long)rowBlockCount;
- (unsigned int)maxPopulatedRow;
- (id)rowBlockForRowNumber:(unsigned int)a0 currentRowBlock:(id)a1 createIfNil:(BOOL)a2;
- (unsigned long long)expectedIndexOfRowBlockForRowNumber:(unsigned int)a0;
- (id)rowBlockAtIndex:(unsigned long long)a0;
- (void)updateMaxPopulatedRow:(unsigned int)a0 column:(unsigned int)a1;
- (BOOL)spaceForRowNumber:(unsigned int)a0 rowBlock:(id)a1;
- (id)rowBlockForRowNumber:(unsigned int)a0 currentRowBlock:(id)a1;
- (id)initWithWorksheet:(id)a0;
- (void)removeRowBlockAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfRowBlockForRowNumber:(unsigned int)a0;
- (unsigned int)maxPopulatedColumn;
- (id)formulas;
- (id)fileNameForPersistingRowBlocksWithIndex:(unsigned long long)a0;
- (id)fileNameForPersistingRowBlocks;
- (Class)classForFormulaType:(unsigned char)a0;
- (unsigned char)formulaTypeForFormula:(id)a0;

@end
