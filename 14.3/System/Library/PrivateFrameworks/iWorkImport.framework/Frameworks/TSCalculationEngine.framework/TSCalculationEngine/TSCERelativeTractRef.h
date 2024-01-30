@class TSCECellTractRef;

@interface TSCERelativeTractRef : NSObject <NSCopying> {
    TSCECellTractRef *_absTractRef;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _relativeColumns;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _relativeRows;
}

@property (nonatomic) BOOL spansAllColumns;
@property (nonatomic) BOOL spansAllRows;
@property (nonatomic) BOOL preserveRectangular;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } tableUID;
@property (readonly, nonatomic) struct TSUPreserveFlags { unsigned char x0; } preserveFlags;

- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)rows;
- (id)init;
- (void)setRows:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned int)numRows;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)columns;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)addRow:(unsigned int)a0;
- (void)setColumns:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (id)debugDescription;
- (void)addColumn:(unsigned short)a0;
- (void)addRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)addColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (unsigned int)numColumns;
- (BOOL)isRectangularRange;
- (void)removeColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)removeRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (id)initWithAbsoluteTractRef:(id)a0 hostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (id)absoluteCellTractRefForHostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)verifySpanningSettings;
- (BOOL)isSingleCellOrSpanningRange;
- (BOOL)hasTableUID;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)relativeRows;
- (void)setRelativeRows:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)relativeColumns;
- (void)setRelativeColumns:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (id)initWithTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a1;
- (void)repairSpanningColumnSetting;
- (void)repairSpanningRowSetting;
- (struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; })relativeTopLeft;
- (struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; })relativeBottomRight;
- (id)absoluteCellTractRefForHostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 offTable:(BOOL *)a1;
- (void)addRelativeColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)addRelativeRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)preserveFlagsFixingInversionsForTract:(id)a0 absFromRelColumns:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a1 absFromRelRows:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a2;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } *)a0 hostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (unsigned int)numRelativeColumns;
- (unsigned int)numRelativeRows;
- (void)addRelativeColumn:(short)a0;
- (void)addRelativeRow:(int)a0;
- (void)removeRelativeColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)removeRelativeRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (struct { struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x1; })relativeBoundingRangeWithContainingCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)adjustRelativeIndexesBy:(const struct TSUColumnRowOffset { int x0; int x1; } *)a0;

@end
