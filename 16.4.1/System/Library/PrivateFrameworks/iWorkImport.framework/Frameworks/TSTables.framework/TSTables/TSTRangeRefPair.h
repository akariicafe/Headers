@class TSCECellTractRef, TSTTableInfo, TSTTableModel;

@interface TSTRangeRefPair : NSObject

@property (retain, nonatomic) TSCECellTractRef *baseTractRef;
@property (retain, nonatomic) TSCECellTractRef *chromeTractRef;
@property (readonly, nonatomic) struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; } chromeRangeRef;
@property (readonly, nonatomic) struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; } baseRangeRef;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (retain, nonatomic) TSTTableModel *tableModel;

- (void).cxx_destruct;
- (id)initWithBaseTractRef:(id)a0 calcEngine:(id)a1;
- (id)initWithChromeTractRef:(id)a0 calcEngine:(id)a1;

@end
