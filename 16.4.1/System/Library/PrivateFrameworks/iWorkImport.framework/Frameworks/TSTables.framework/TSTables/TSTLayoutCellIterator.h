@class TSTCell, TSTMutableCellIteratorData, TSTLayoutEngine;
@protocol TSTCellIteratorData;

@interface TSTLayoutCellIterator : TSTCellIterator

@property (readonly, nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } layoutRange;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } layoutCellID;
@property (readonly, nonatomic) TSTCell *layoutCell;
@property (nonatomic) id<TSTCellIteratorData> modelIteratorData;
@property (nonatomic) BOOL queriedModel;
@property (nonatomic) BOOL modelIteratorHasCell;
@property (nonatomic) BOOL columnOrderReversed;
@property (nonatomic) unsigned int numberOfLayoutColumns;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic) BOOL isDynamicallyChangingContent;
@property (nonatomic) BOOL isDynamicallyChangingRowOrColumnCount;
@property (nonatomic) BOOL isDynamicallyHidingRowsCols;
@property (nonatomic) BOOL isDynamicallyRemovingText;
@property (retain, nonatomic) TSTMutableCellIteratorData *layoutCellData;
@property (readonly, nonatomic) TSTLayoutEngine *layoutEngine;

+ (BOOL)isNeededWithLayoutEngine:(id)a0 andRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;

- (void).cxx_destruct;
- (BOOL)getNextCellData:(id *)a0;
- (id)initWithLayout:(id)a0 range:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3;
- (id)initWithLayoutEngine:(id)a0 range:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3;

@end
