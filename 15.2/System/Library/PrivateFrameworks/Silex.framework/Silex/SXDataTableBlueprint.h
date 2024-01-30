@class SXDataTableDictionary;

@interface SXDataTableBlueprint : NSObject

@property (readonly, nonatomic) SXDataTableDictionary *blueprint;
@property (readonly, nonatomic) SXDataTableDictionary *contentBlueprint;
@property (readonly, nonatomic) SXDataTableDictionary *rowDividers;
@property (readonly, nonatomic) SXDataTableDictionary *columnDividers;
@property (nonatomic) unsigned long long dataOrientation;
@property (nonatomic) struct CGSize { double width; double height; } tableSize;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tableInsets;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNumberOfRows:(unsigned long long)a0 numberOfColumns:(unsigned long long)a1 withTableInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)addCellRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (void)addCellContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (void)addColumnDividerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (void)addRowDividerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForColumnAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellRectForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRowDividerAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForColumnDividerAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRowAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellContentRectForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isRectValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
