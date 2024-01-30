@class TSTCellRegion, NSString;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol> {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _capturedRowHeights;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _currentRowHeights;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _minimumRowHeights;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _capturedColumnWidths;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _currentColumnWidths;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _minimumColumnWidths;
}

@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) int tableRowsBehavior;
@property (readonly, nonatomic) unsigned int startRowIndex;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned int numberOfResizableRows;
@property (readonly, nonatomic) double capturedRowHeightTotal;
@property (readonly, nonatomic) unsigned short startColumnIndex;
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfResizableColumns;
@property (readonly, nonatomic) double capturedColumnWidthTotal;
@property (retain, nonatomic) TSTCellRegion *rowRegion;
@property (retain, nonatomic) TSTCellRegion *columnRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (id)columnWidths;
- (id)rowHeights;
- (double)getColumnWidth:(unsigned short)a0;
- (double)applyColumnTotalWidth:(double)a0;
- (double)applyResizeHeightFactor:(double)a0;
- (double)applyResizeWidthFactor:(double)a0;
- (double)applyRowTotalHeight:(double)a0;
- (void)captureNewMinimumRowHeights:(id)a0;
- (struct CGSize { double x0; double x1; })capturedTableSize;
- (void)enumerateColumnWidthsUsingBlock:(id /* block */)a0;
- (void)enumerateRowHeightsUsingBlock:(id /* block */)a0;
- (double)getColumnInitialWidth:(unsigned short)a0;
- (double)getColumnWidthResize:(unsigned short)a0;
- (double)getRowHeight:(unsigned int)a0;
- (double)getRowHeightResize:(unsigned int)a0;
- (double)getRowInitialHeight:(unsigned int)a0;
- (BOOL)hasHeightForRow:(unsigned int)a0;
- (BOOL)hasWidthForColumn:(unsigned short)a0;
- (id)initWithDynamicResizeInfo:(id)a0;
- (void)p_captureRowColumnInformation:(id)a0 columnRegion:(id)a1 rowRegion:(id)a2;
- (id)initWithLayoutEngine:(id)a0 rowRegion:(id)a1;
- (double)getMinimumColumnWidth:(unsigned short)a0;
- (double)getMinimumRowHeight:(unsigned int)a0;
- (id)initWithLayoutEngine:(id)a0;
- (id)initWithLayoutEngine:(id)a0 columnRegion:(id)a1;
- (id)initWithLayoutEngine:(id)a0 columnRegion:(id)a1 rowRegion:(id)a2;
- (double)totalCapturedColumnWidths;
- (double)totalCapturedRowHeights;
- (double)totalCurrentColumnWidths;
- (double)totalCurrentRowHeights;
- (double)totalMinimumColumnWidths;
- (double)totalMinimumRowHeights;

@end
