@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; } boundingModelCellRect;
@property (readonly, nonatomic) struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; } boundingViewCellRect;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } boundingCellRange;
@property (nonatomic) unsigned long long cellCount;
@property (retain, nonatomic) NSIndexSet *intersectingColumnsIndexSet;
@property (retain, nonatomic) NSIndexSet *intersectingRowsIndexSet;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } firstCellID;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } lastCellID;
@property (readonly, nonatomic) struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *__value_; } __end_cap_; } cellRanges;
@property (readonly, nonatomic) unsigned long long cellRangeCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isRectangle;
@property (readonly, nonatomic) unsigned long long sizeClass;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } boundingTopLeftCellID;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } boundingBottomRightCellID;
@property (readonly, nonatomic) unsigned int numberOfIntersectingColumns;
@property (readonly, nonatomic) unsigned int numberOfIntersectingRows;

+ (id)regionFromRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
+ (id)invalidRegion;
+ (id)region:(id)a0 addingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)region:(id)a0 subtractingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)region:(id)a0 intersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)unionEveryRangeInRegion:(id)a0 withRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)region:(id)a0 addingRegion:(id)a1;
+ (id)region:(id)a0 subtractingRegion:(id)a1;
+ (id)regionFillingColumnsFromRegion:(id)a0;
+ (id)regionFillingRowsFromRegion:(id)a0;
+ (id)regionFromRowIndices:(id)a0;
+ (id)regionFromColumnIndices:(id)a0;
+ (id)regionFromRowIndices:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)regionFromColumnIndices:(id)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)regionFromColumnIndexes:(id)a0 rowIndexes:(id)a1;
+ (id)regionFromCellIDVector:(const void *)a0;
+ (id)regionFromCellRangeVector:(const void *)a0;
+ (id)regionFromMergeList:(const void *)a0;
+ (id)regionFromCellCoordSet:(const void *)a0;
+ (id)regionFromViewCellRectVector:(const void *)a0;
+ (id)regionFromViewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
+ (struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *x0; struct TSUCellRect *x1; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *x0; } x2; })combineNonOverlappingCellRanges:(void *)a0 addingOverlappingCellRanges:(void *)a1;
+ (id)regionFromCellMap:(id)a0 withTableInfo:(id)a1;
+ (id)regionFromModelCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
+ (id)regionFromCellMap:(id)a0 withTableInfo:(id)a1 passingTest:(id /* block */)a2;
+ (id)region:(id)a0 subtractingRowIndexes:(id)a1;
+ (id)region:(id)a0 subtractingColumnIndexes:(id)a1;
+ (id)region:(id)a0 intersectingRegion:(id)a1;
+ (id)regionFromCellDiffMap:(id)a0 withTableInfo:(id)a1;
+ (id)regionFromCellUIDVector:(const void *)a0 withTableInfo:(id)a1;
+ (id)regionFromOverlappingCellRangeVector:(const void *)a0;
+ (id)regionFromModelMergeList:(const void *)a0;
+ (id)regionFromMergeActionArray:(id)a0 withTableInfo:(id)a1;
+ (id)regionFromPropertyListRepresentation:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isValid;
- (id)p_copy;
- (void)enumerateColumnsUsingBlock:(id /* block */)a0;
- (id)regionByAddingRegion:(id)a0;
- (id)regionOffsetBy:(struct TSUColumnRowOffset { int x0; int x1; })a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })suitableAnchor;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })suitableCursor;
- (BOOL)equalsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)containsCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)regionByAddingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)regionBySubtractingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)equalsCellRegion:(id)a0;
- (BOOL)containsCellRegion:(id)a0;
- (BOOL)intersectsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)containsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)p_insertRangeIntoRegion:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)p_calculateAncillaryInformation;
- (void)enumerateCellRangesUsingBlock:(id /* block */)a0;
- (id)regionByIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)regionByUnioningEveryRangeInRegionWithRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)regionBySubtractingRegion:(id)a0;
- (id)regionByRemovingRows:(id)a0;
- (id)regionByRemovingColumns:(id)a0;
- (id)regionByIntersectingRowIndices:(id)a0;
- (id)regionByIntersectingColumnIndices:(id)a0;
- (id)regionByAddingRows:(id)a0;
- (id)regionByAddingColumns:(id)a0;
- (id)regionByApplyingRowMapping:(id)a0;
- (BOOL)partiallyIntersectsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (BOOL)intersectsColumn:(unsigned short)a0;
- (BOOL)intersectsRow:(unsigned int)a0;
- (void)enumerateCellIDsUsingBlock:(id /* block */)a0;
- (void)enumerateInDirection:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateRowRangesUsingBlock:(id /* block */)a0;
- (void)enumerateColumnRangesUsingBlock:(id /* block */)a0;
- (void)fillCellRangeRowMajorSet:(void *)a0 leftToRight:(BOOL)a1;
- (void)saveToMessage:(void *)a0;
- (id)prunedCellRegionAgainstTable:(id)a0 behavior:(unsigned long long)a1;
- (id)initFromMessage:(const void *)a0;
- (id)regionByTrimmingAroundRowIndices:(id)a0;
- (id)regionByTrimmingAroundColumnIndices:(id)a0;
- (BOOL)intersectsCellRegion:(id)a0;
- (id)regionBySubtractingColumnIndexes:(id)a0;
- (id)regionBySubtractingRowIndexes:(id)a0;
- (id)newRightToLeftIterator;
- (id)newIterator;
- (void)enumerateMissingRowsIntersectingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateRowsIntersectingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateMissingColumnsIntersectingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateColumnsIntersectingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (id)intersectingColumnsInRow:(unsigned int)a0;
- (void)enumerateModelCellRectsUsingBlock:(id /* block */)a0;
- (BOOL)partiallyIntersectsModelCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)regionByMovingColumnsFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned short)a1;
- (id)regionByMovingRowsFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned int)a1;
- (struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *x0; struct TSUCellRect *x1; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *x0; } x2; })subRangesOfCellCount:(unsigned long long)a0;
- (id)regionByIntersectingRegion:(id)a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })modelCellRanges;
- (BOOL)containsModelCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0;
- (id)regionByAddingModelCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)regionBySubtractingModelCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)regionBySubtractingModelCellRegion:(id)a0;
- (BOOL)intersectsModelCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)containsModelCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (void)enumerateRowRangesInReverseUsingBlock:(id /* block */)a0;
- (void)enumerateColumnRangesInReverseUsingBlock:(id /* block */)a0;
- (id)prunedCellRegionAgainstTable:(id)a0 behavior:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)p_copyFromRegion:(id)a0;
- (id)regionByCollapsingRangesForRemovedRows:(id)a0;
- (id)regionByCollapsingRangesForRemovedColumns:(id)a0;
- (id)regionUpToColumnIndex:(unsigned short)a0;
- (id)regionUpToColumnIndexRtoL:(unsigned short)a0 maxColumnIndex:(unsigned short)a1;
- (id)regionAfterColumnIndex:(unsigned short)a0;
- (id)regionAfterColumnIndexRtoL:(unsigned short)a0;
- (id)regionUpToRowIndex:(unsigned int)a0;
- (id)regionAfterRowIndex:(unsigned int)a0;
- (struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> { unsigned long long x0; } x2; } x0; } x0; })asCellCoordSet;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })largestRangeContainingCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)isSingleCellWideOrHigh:(id)a0;
- (id)newBottomToTopIterator;
- (void)enumerateColumnsInReverseUsingBlock:(id /* block */)a0;
- (void)enumerateRowsInReverseUsingBlock:(id /* block */)a0;
- (void)enumerateGridColumnsUsingBlock:(id /* block */)a0;
- (void)enumerateGridRowsUsingBlock:(id /* block */)a0;
- (id)regionByAddingModelCellRegion:(id)a0;
- (id)regionByAddingViewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)regionBySubtractingViewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)regionByAddingViewCellRegion:(id)a0;
- (id)regionBySubtractingViewCellRegion:(id)a0;
- (void)enumerateViewCellRectsUsingBlock:(id /* block */)a0;
- (void)fillCellRangeColMajorSet:(void *)a0 topToBottom:(BOOL)a1;

@end
