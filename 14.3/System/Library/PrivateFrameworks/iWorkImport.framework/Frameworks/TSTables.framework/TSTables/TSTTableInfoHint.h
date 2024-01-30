@class NSMutableSet, TSTCellUIDList;

@interface TSTTableInfoHint : NSObject

@property (readonly, nonatomic) NSMutableSet *tableStyleSet;
@property (readonly, nonatomic) TSTCellUIDList *cellFillList;

- (id)init;
- (void)dealloc;
- (void)addCellUIDToFillList:(struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; })a0;
- (void)setTableStyleImageForStyleArea:(unsigned long long)a0;

@end
