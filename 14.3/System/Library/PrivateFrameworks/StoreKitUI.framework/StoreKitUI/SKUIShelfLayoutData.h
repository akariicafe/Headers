@class NSMutableArray;

@interface SKUIShelfLayoutData : NSObject {
    NSMutableArray *_columnWidths;
    double *_rowHeights;
}

@property (readonly, nonatomic) double columnSpacing;
@property (readonly, nonatomic) long long numberOfRows;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } totalContentSize;
@property (readonly, nonatomic) long long numberOfColumns;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;
- (void)enumerateColumnsUsingBlock:(id /* block */)a0;
- (double)columnWidthForIndex:(long long)a0;
- (double)rowHeightForIndex:(long long)a0;
- (id)initWithNumberOfRows:(long long)a0 columnSpacing:(double)a1;
- (void)reloadWithItemCount:(long long)a0 sizeBlock:(id /* block */)a1;

@end
