@class NSString, TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol> {
    BOOL mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned int mStartRowIndex;
    unsigned int mNumberOfRows;
    unsigned int mNumberOfResizableRows;
    double *mCapturedRowHeights;
    double *mCurrentRowHeights;
    double *mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned short mStartColumnIndex;
    unsigned int mNumberOfColumns;
    unsigned int mNumberOfResizableColumns;
    double *mCapturedColumnWidths;
    double *mCurrentColumnWidths;
    double *mMinimumColumnWidths;
    double mCapturedColumnWidthTotal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)valid;
- (void)dealloc;
- (id)columnWidths;
- (void)invalidate;
- (id)rowHeights;
- (void)p_captureRowColumnInformation:(id)a0 columnRegion:(id)a1 rowRegion:(id)a2;
- (BOOL)hasHeightForRow:(unsigned int)a0;
- (BOOL)hasWidthForColumn:(unsigned short)a0;
- (double)applyResizeHeightFactor:(double)a0;
- (double)applyResizeWidthFactor:(double)a0;
- (double)getColumnWidth:(unsigned short)a0;
- (double)getRowHeight:(unsigned int)a0;
- (void)enumerateRowHeightsUsingBlock:(id /* block */)a0;
- (void)enumerateColumnWidthsUsingBlock:(id /* block */)a0;
- (id)initWithMasterLayout:(id)a0;
- (id)initWithMasterLayout:(id)a0 columnRegion:(id)a1;
- (id)initWithMasterLayout:(id)a0 rowRegion:(id)a1;
- (id)initWithDynamicResizeInfo:(id)a0;
- (double)getRowInitialHeight:(unsigned int)a0;
- (double)getColumnInitialWidth:(unsigned short)a0;
- (double)getRowHeightResize:(unsigned int)a0;
- (double)getColumnWidthResize:(unsigned short)a0;
- (void)captureNewMinimumRowHeights:(id)a0;
- (double)applyRowTotalHeight:(double)a0;
- (double)applyColumnTotalWidth:(double)a0;
- (struct CGSize { double x0; double x1; })capturedTableSize;
- (id)initWithMasterLayout:(id)a0 columnRegion:(id)a1 rowRegion:(id)a2;
- (double)getMinimumRowHeight:(unsigned int)a0;
- (double)getMinimumColumnWidth:(unsigned short)a0;
- (double)totalCapturedRowHeights;
- (double)totalCapturedColumnWidths;
- (double)totalCurrentRowHeights;
- (double)totalCurrentColumnWidths;
- (double)totalMinimumRowHeights;
- (double)totalMinimumColumnWidths;

@end
