@class TSTColumnRowUIDMapper, TSTHierarchicalCellDiffMap;

@interface TSTFormulaRewrite_PivotInfo : NSObject

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (retain, nonatomic) TSTHierarchicalCellDiffMap *beforeRewriteMap;
@property (retain, nonatomic) TSTColumnRowUIDMapper *beforeColumnRowUIDMap;
@property (retain, nonatomic) TSTHierarchicalCellDiffMap *afterRewriteMap;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 beforeViewColumnRowUIDMap:(id)a1 beforeRewriteMap:(id)a2;

@end
