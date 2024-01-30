@class NSString, TSCEFormulasToSet, TSCECalculationEngine;

@interface TSCERewritingMinion : NSObject <TSCEFormulaReplacing> {
    TSCEFormulasToSet *_formulasToSet;
    struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _coordsForOwnerUid; } _rewrittenCells;
    struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _coordsForOwnerUid; } _pendingCellsToRemove;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAllFormulasFromOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)removeFormulaAt:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceFormulaAt:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 precedents:(id)a2 replaceOptions:(struct TSCEReplaceFormulaOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; id x6; })a3;
- (void)flushAllChanges;
- (void)resetFormulaAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)addPendingCellRemovalAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)addRewrittenCellAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (BOOL)hasRewrittenCellAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithCalcEngine:(id)a0;
- (void)markCellRefAsDirty:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)removeFormulasAt:(const void *)a0;
- (void)replaceFormula:(id)a0 atCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)replaceFormula:(id)a0 atCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 replaceOptions:(struct TSCEReplaceFormulaOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; id x6; })a3;

@end
