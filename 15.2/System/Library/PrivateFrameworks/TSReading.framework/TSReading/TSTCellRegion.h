@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying> {
    unsigned long long mCellRangesCount;
    struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } *mCellRanges;
    struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } mBoundingCellRange;
    unsigned long long mCellCount;
    NSIndexSet *mIntersectingColumnsIndexSet;
    NSIndexSet *mIntersectingRowsIndexSet;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } mUpperLeftCellID;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } mBottomRightCellID;
}

@property (readonly, nonatomic) struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } boundingCellRange;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isRectangle;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned char x1; unsigned char x2; } upperLeftCellID;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned char x1; unsigned char x2; } bottomRightCellID;
@property (readonly, nonatomic) unsigned short numberOfIntersectingColumns;
@property (readonly, nonatomic) unsigned short numberOfIntersectingRows;

+ (id)regionFromRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
+ (id)invalidRegion;
+ (id)region:(id)a0 addingRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)region:(id)a0 subtractingRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)region:(id)a0 intersectingRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)unionEveryRangeInRegion:(id)a0 withRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
+ (id)region:(id)a0 addingRegion:(id)a1;
+ (id)region:(id)a0 subtractingRegion:(id)a1;
+ (id)regionFromCellMap:(id)a0;
+ (id)regionFillingColumnsFromRegion:(id)a0;
+ (id)regionFillingRowsFromRegion:(id)a0;
+ (id)regionFromRowIndices:(id)a0;
+ (id)regionFromColumnIndices:(id)a0;

- (id)iterator;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)isValid;
- (void)enumerateColumnsUsingBlock:(id /* block */)a0;
- (id)regionByAddingRegion:(id)a0;
- (id)regionOffsetBy:(struct { int x0; int x1; })a0;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; })suitableAnchor;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; })suitableCursor;
- (BOOL)equalsCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)containsCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (id)regionByAddingRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (id)regionBySubtractingRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)equalsCellRegion:(id)a0;
- (BOOL)containsCellRegion:(id)a0;
- (BOOL)intersectsCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)containsCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (void)p_insertRangeIntoRegion:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (void)p_calculateAncillaryInformation;
- (void)enumerateCellRangesUsingBlock:(id /* block */)a0;
- (id)regionByIntersectingRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateIntersectingRows;
- (void)p_calculateUpperLeftAndBottomRightCellID;
- (id)regionByUnioningEveryRangeInRegionWithRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (id)regionBySubtractingRegion:(id)a0;
- (id)regionByRemovingRows:(id)a0;
- (id)regionByRemovingColumns:(id)a0;
- (id)regionByIntersectingRowIndices:(id)a0;
- (id)regionByIntersectingColumnIndices:(id)a0;
- (id)regionByAddingRows:(id)a0;
- (id)regionByAddingColumns:(id)a0;
- (id)regionByApplyingRowMapping:(id)a0;
- (BOOL)partiallyIntersectsCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)intersectsColumn:(unsigned char)a0;
- (BOOL)intersectsRow:(unsigned short)a0;
- (id)intersectingColumnsIndexSet;
- (id)intersectingRowsIndexSet;
- (id)rightToLeftIterator;
- (id)topToBottomIterator;
- (void)enumerateCellIDsUsingBlock:(id /* block */)a0;
- (void)enumerateInDirection:(int)a0 usingBlock:(id /* block */)a1;
- (void)enumerateRowRangesUsingBlock:(id /* block */)a0;
- (void)enumerateColumnRangesUsingBlock:(id /* block */)a0;
- (void)fillCellRangeRowMajorSet:(void *)a0 leftToRight:(BOOL)a1;
- (void)fillCellRangeColMajorSet:(void *)a0 leftToRight:(BOOL)a1;

@end
