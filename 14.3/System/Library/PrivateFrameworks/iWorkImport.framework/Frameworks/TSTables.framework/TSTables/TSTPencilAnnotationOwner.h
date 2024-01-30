@class TSCECalculationEngine, NSString, TSTFormulaStore, TSTTableModel, TSUSparseArray;

@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>

@property (readonly, weak, nonatomic) TSCECalculationEngine *calculationEngine;
@property (readonly, weak, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) TSTFormulaStore *formulaStore;
@property (retain, nonatomic) TSUSparseArray *annotations;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } ownerUID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)containsAnnotation:(id)a0;
- (id).cxx_construct;
- (void)removeAnnotations:(id)a0;
- (id)removeAnnotation:(id)a0;
- (long long)evaluationMode;
- (void)removeAllAnnotations;
- (id)initWithTableModel:(id)a0;
- (void)saveToArchive:(struct PencilAnnotationOwnerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct CFUUIDArchive *x5; struct FormulaStoreArchive *x6; } *)a0 archiver:(id)a1;
- (unsigned short)ownerKind;
- (id)linkedResolver;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)invalidateForCalcEngine:(id)a0;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSUIndexSet> > > { struct __tree<std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, TSUIndexSet> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, TSUIndexSet>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true> > { unsigned long long x0; } x2; } x0; } x0; } *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)unregisterFromCalcEngine;
- (unsigned long long)addAnnotation:(id)a0 withAnchorRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)enumerateAnnotationsAndFormulasContainedInRegion:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithArchive:(const struct PencilAnnotationOwnerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct CFUUIDArchive *x5; struct FormulaStoreArchive *x6; } *)a0 unarchiver:(id)a1 forTableModel:(id)a2;
- (id)annotationsContainedByRegion:(id)a0;
- (void)remapTableUIDsInFormulasWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { float x0; } x3; } x0; } *)a0;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (unsigned long long)markForRollback;
- (void)rollbackToMark:(unsigned long long)a0;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })cellRangeForAnnotation:(id)a0;
- (id)initWithTableModel:(id)a0 ownerUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })a1 annotations:(id)a2 formulaStore:(id)a3;
- (void)addAnnotation:(id)a0 withFormulaObject:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)indexOfAnnotation:(id)a0;
- (void)enumerateAnnotationsWithBlock:(id /* block */)a0;
- (id)_indexesForRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 startingOnly:(BOOL)a1;
- (void)_enumerateAnnotationsAndFormulasWithIndexes:(id)a0 block:(id /* block */)a1;
- (id)_indexesContainedByRegion:(id)a0;
- (id)_annotationsForIndexes:(id)a0;
- (id)_indexesForRows:(id)a0;
- (id)_indexesIntersectingButNotContainingBaseCellRegion:(id)a0;
- (void)_enumerateIndexesIntersectingRegion:(id)a0 block:(id /* block */)a1;
- (void)addAnnotation:(id)a0 withFormula:(id)a1 atIndex:(unsigned long long)a2;
- (id)removeAnnotationAtIndex:(unsigned long long)a0;
- (void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 withBlock:(id /* block */)a1;
- (id)annotationsStartingInRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)_annotationsInRows:(id)a0;
- (id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)a0;

@end
