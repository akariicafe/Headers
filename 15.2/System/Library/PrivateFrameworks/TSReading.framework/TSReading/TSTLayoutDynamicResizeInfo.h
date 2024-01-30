@class NSString, TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol> {
    BOOL mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    double *mCapturedRowHeights;
    double *mCurrentRowHeights;
    double *mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
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
- (id)columnWidths;
- (void)invalidate;
- (void)dealloc;
- (id)rowHeights;
- (void)p_captureRowColumnInformation:(id)a0 columnRegion:(id)a1 rowRegion:(id)a2;
- (BOOL)hasHeightForRow:(unsigned short)a0;
- (BOOL)hasWidthForColumn:(unsigned char)a0;
- (double)applyResizeHeightFactor:(double)a0;
- (double)applyResizeWidthFactor:(double)a0;
- (double)getColumnWidth:(unsigned char)a0;
- (double)getRowHeight:(unsigned short)a0;
- (void)enumerateRowHeightsUsingBlock:(id /* block */)a0;
- (void)enumerateColumnWidthsUsingBlock:(id /* block */)a0;
- (id)initWithMasterLayout:(id)a0;
- (id)initWithMasterLayout:(id)a0 columnRegion:(id)a1;
- (id)initWithMasterLayout:(id)a0 rowRegion:(id)a1;
- (id)initWithDynamicResizeInfo:(id)a0;
- (double)getRowInitialHeight:(unsigned short)a0;
- (double)getColumnInitialWidth:(unsigned char)a0;
- (double)getRowHeightResize:(unsigned short)a0;
- (double)getColumnWidthResize:(unsigned char)a0;
- (void)captureNewMinimumRowHeights:(id)a0;
- (double)applyRowTotalHeight:(double)a0;
- (double)applyColumnTotalWidth:(double)a0;
- (struct CGSize { double x0; double x1; })capturedTableSize;

@end
