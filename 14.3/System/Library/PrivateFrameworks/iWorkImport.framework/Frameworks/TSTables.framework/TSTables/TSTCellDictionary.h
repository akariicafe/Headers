@class TSPTemporaryObjectContextDelegate, TSPObjectContext;

@interface TSTCellDictionary : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct map<TSUCellCoord, TSTCell *, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTCell *> > > { struct __tree<std::__1::__value_type<TSUCellCoord, TSTCell *>, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, TSTCell *>, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, TSTCell *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, TSTCell *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, TSTCell *>, std::__1::less<TSUCellCoord>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _cellsByCoord;
    TSPTemporaryObjectContextDelegate *_temporaryObjectContextDelegate;
    TSPObjectContext *_temporaryContext;
    struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSUIndexSet> > > { struct __tree<std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, TSUIndexSet> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, TSUIndexSet>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _rowsPerColumn; } _cellCoordsToStyleUpgradeForFormulatext;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)allCells;
- (void)setCell:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)cellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)removeAllCells;
- (void)applyBlockToAllCells:(id /* block */)a0;
- (struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSUIndexSet> > > { struct __tree<std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, TSUIndexSet> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, TSUIndexSet>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true> > { unsigned long long x0; } x2; } x0; } x0; })allCellCoords;
- (void)upgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)noLockShouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)shouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;

@end
