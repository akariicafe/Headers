@class TSTCellRegion, NSString;

@interface TSTTableSelection : TSKSelection <NSCopying, TSDTextSelection>

@property (readonly, nonatomic) TSTCellRegion *cellRegion;
@property (readonly, nonatomic) int selectionType;
@property (readonly, nonatomic) struct { unsigned short row; unsigned char column; unsigned char reserved; } anchorCellID;
@property (readonly, nonatomic) TSTCellRegion *baseRegion;
@property (readonly, nonatomic) struct { unsigned short row; unsigned char column; unsigned char reserved; } cursorCellID;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } searchReferenceRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSelection:(id)a0;
- (BOOL)areCellsInTheSameRegionInTable:(id)a0;
- (BOOL)containsCell:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (BOOL)containsSelection:(id)a0;
- (void)enumerateSelectedCellsInTable:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateSelectedCellsInTable:(id)a0 withFlags:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithTableModel:(id)a0 andCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (id)initWithTableModel:(id)a0 andCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
- (id)initWithTableModel:(id)a0 andPreviousSelection:(id)a1 offsetBy:(struct { int x0; int x1; })a2;
- (id)initWithTableModel:(id)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 selectionType:(int)a2;
- (id)initWithTableModel:(id)a0 cellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1 type:(int)a2 anchorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3 cursorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a4;
- (id)initWithTableModel:(id)a0 cellRegion:(id)a1;
- (id)initWithTableModel:(id)a0 cellRegion:(id)a1 anchorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 cursorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3;
- (id)initWithTableModel:(id)a0 cellRegion:(id)a1 anchorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 cursorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3 baseRegion:(id)a4;
- (id)initWithTableModel:(id)a0 cellRegion:(id)a1 anchorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 cursorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3 baseRegion:(id)a4 selectionType:(int)a5;
- (id)initWithTableModel:(id)a0 cellRegion:(id)a1 anchorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 cursorCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3 selectionType:(int)a4;
- (id)initWithTableModel:(id)a0 rowOrColumn:(int)a1 index:(unsigned int)a2 count:(unsigned int)a3;
- (id)initWithTableModel:(id)a0 selectionType:(int)a1;
- (id)initWithTableModel:(id)a0 startingColumnIndex:(unsigned short)a1 numberOfColumns:(unsigned short)a2;
- (id)initWithTableModel:(id)a0 startingRowIndex:(unsigned short)a1 numberOfRows:(unsigned short)a2;
- (void)insert:(int)a0 atIndex:(unsigned short)a1 count:(unsigned short)a2;
- (BOOL)intersectsPartialMergeRangeInTable:(id)a0;
- (void)remove:(int)a0 atIndex:(unsigned short)a1 count:(unsigned short)a2;
- (id)selectionByAddingCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 inTable:(id)a1 withAnchor:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 cursor:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3 selectionType:(int)a4;
- (id)selectionByExtendingWithCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 inTable:(id)a1 selectionType:(int)a2 cursorCell:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3;
- (id)selectionByMovingInTableInfo:(id)a0 inDirection:(int)a1 withModifierKeys:(int)a2 forReferenceMove:(BOOL)a3;
- (id)selectionByMovingInTableInfo:(id)a0 inDirection:(int)a1 withModifierKeys:(int)a2 forReferenceMove:(BOOL)a3 suppressWrap:(BOOL)a4;
- (id)selectionByRemovingCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 inTable:(id)a1 withAnchor:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a2 cursor:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a3 selectionType:(int)a4;

@end
