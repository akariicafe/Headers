@class TSCECellTractRef, TSTTableInfo, TSTTableModel;

@interface TSTRangeRefPair : NSObject

@property (retain, nonatomic) TSCECellTractRef *baseTractRef;
@property (retain, nonatomic) TSCECellTractRef *chromeTractRef;
@property (readonly, nonatomic) struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x0; } chromeRangeRef;
@property (readonly, nonatomic) struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x0; } baseRangeRef;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } tableUID;
@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (retain, nonatomic) TSTTableModel *tableModel;

- (void).cxx_destruct;
- (id)initWithChromeTractRef:(id)a0 calcEngine:(id)a1;
- (id)initWithBaseTractRef:(id)a0 calcEngine:(id)a1;

@end
