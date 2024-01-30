@class TSPTemporaryObjectContextDelegate, TSPObjectContext;

@interface TSTCellDictionary : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct map<TSUCellCoord, TSTCell *, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> { struct __tree<std::__value_type<TSUCellCoord, TSTCell *>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, TSTCell *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, TSTCell *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, TSTCell *>, std::less<TSUCellCoord>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _cellsByCoord;
    TSPTemporaryObjectContextDelegate *_temporaryObjectContextDelegate;
    TSPObjectContext *_temporaryContext;
    struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _rowsPerColumn; } _cellCoordsToStyleUpgradeForFormulatext;
}

- (void).cxx_destruct;
- (id)init;
- (id)allCells;
- (id).cxx_construct;
- (void)setCell:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)cellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)removeAllCells;
- (void)applyBlockToAllCells:(id /* block */)a0;
- (struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>, true>> { unsigned long long x0; } x2; } x0; } x0; })allCellCoords;
- (void)upgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)noLockShouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)hasCellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)shouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;

@end
