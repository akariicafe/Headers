@class TSTCellRegion;

@interface TNChartRangeList : NSObject {
    struct vector<TSCERangeCoordinate, std::allocator<TSCERangeCoordinate>> { struct TSCERangeCoordinate *__begin_; struct TSCERangeCoordinate *__end_; struct __compressed_pair<TSCERangeCoordinate *, std::allocator<TSCERangeCoordinate>> { struct TSCERangeCoordinate *__value_; } __end_cap_; } _ranges;
    struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } _unionRange;
    BOOL _unionRangeValid;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (readonly, nonatomic) TSTCellRegion *cellRegion;

+ (id)rangeListWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (id)rangeListWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 range:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a1;
+ (id)rangeListWithRangeRef:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0;

- (BOOL)containsRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })rangeAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (unsigned long long)numberOfRanges;
- (void)removeAllRanges;
- (BOOL)containsCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)addRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0 coalesceFlags:(int)a1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })unionRange;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })rangeStartingAtCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 direction:(int)a1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })rangeStartingAfterCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 direction:(int)a1;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 range:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a1;
- (struct { unsigned int x0; unsigned int x1; })chartableSizeByDirection:(int)a0;

@end
