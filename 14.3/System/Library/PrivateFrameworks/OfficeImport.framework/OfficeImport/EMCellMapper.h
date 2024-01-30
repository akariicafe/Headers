@class EDReference;

@interface EMCellMapper : CMMapper {
    struct EDCellHeader { unsigned int x0; unsigned int x1; } *edCell;
    EDReference *edMergedCellReference;
    int rowNumber;
    int firstColumn;
    int lastColumn;
    int columnSpan;
    BOOL firstCellFlag;
    BOOL spreadLeftFlag;
    double columnWidth;
}

+ (BOOL)isCellEmpty:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a0;

- (void).cxx_destruct;
- (int)columnSpan;
- (id)initWithParent:(id)a0;
- (double)columnWidth;
- (int)firstColumn;
- (int)lastColumn;
- (void)mapRowColSpansAt:(id)a0 withState:(id)a1;
- (id)mapHyperlink:(id)a0 at:(id)a1;
- (id)initWithEDCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a0 rowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1 parent:(id)a2 state:(id)a3;
- (void)setLastColumn:(int)a0;
- (void)setFirstColumn:(int)a0;
- (void)resetColumnSpan:(int)a0;
- (BOOL)isCellEmpty;
- (void)setFirstCellFlag;
- (BOOL)isFirstCell;
- (BOOL)isCellSpreading:(id)a0;
- (BOOL)isCellMerged;
- (void)adjustColumnSpanForGrid:(double *)a0 columnCount:(unsigned long long)a1 nextCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a2 withState:(id)a3;
- (void)mapAt:(id)a0 withState:(id)a1 height:(double)a2 nextCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a3;

@end
