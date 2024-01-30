@interface EDRowBlock : NSObject {
    struct __CFData { } *mPackedData;
    struct __CFData { } *mCellOffsets;
}

@property (readonly, nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) unsigned int firstRowNumber;
@property (readonly, nonatomic) unsigned int lastRowNumber;
@property (readonly, nonatomic) unsigned int minRowNumber;
@property (readonly, nonatomic) unsigned int maxRowNumber;

+ (id)rowBlock;

- (void)setIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)index;
- (void)dealloc;
- (id)description;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)cellAtIndex:(unsigned int)a0 rowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)cellWithColumnNumber:(unsigned int)a0 rowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1;
- (struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)rowInfoWithRowNumber:(unsigned int)a0;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)addCellWithColumnNumber:(unsigned int)a0 type:(int)a1 isFormulaCell:(BOOL)a2 rowInfo:(struct EDRowInfo **)a3 rowBlocks:(id)a4;
- (void)unarchiveFromData:(struct __CFData { } *)a0 offset:(unsigned long long *)a1;
- (void)archiveByAppendingToMutableData:(struct __CFData { } *)a0;
- (unsigned int)indexOfRowInfoWithRowNumber:(unsigned int)a0;
- (struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)rowInfoAtIndex:(unsigned int)a0;
- (unsigned int)expectedIndexOfCellWithColumnNumber:(unsigned int)a0 rowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1;
- (void)doneWithContent;
- (struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)rowInfoWithRowNumber:(unsigned int)a0 createIfNil:(BOOL)a1;
- (struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)addRowInfoWithRowNumber:(unsigned int)a0 cellCountHint:(unsigned int)a1;
- (unsigned int)indexOfCellWithColumnNumber:(unsigned int)a0 rowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1;
- (void)removeCellAtIndex:(unsigned int)a0 rowInfo:(struct EDRowInfo **)a1;
- (unsigned long long)startOfCellsOrThrow;
- (void)checkCellOffsetOrThrow:(unsigned long long)a0;
- (void)incrementIndex;

@end
