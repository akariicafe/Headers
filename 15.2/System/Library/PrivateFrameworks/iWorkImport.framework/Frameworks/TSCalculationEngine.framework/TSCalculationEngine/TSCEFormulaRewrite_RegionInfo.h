@class TSCEFormulaRewrite_Uids;

@interface TSCEFormulaRewrite_RegionInfo : NSObject

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } condStyleOwnerUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *columnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *rowUids;

- (id)description;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0;
- (id)initFromMessage:(const void *)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })topLeftCellCoord;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })mergingRange;
- (void)loadIndexesForTable:(id)a0 uidResolver:(id)a1;
- (void)unloadIndexes;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })bottomRightCellCoord;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 columnUids:(const void *)a1 rowUids:(const void *)a2;

@end
