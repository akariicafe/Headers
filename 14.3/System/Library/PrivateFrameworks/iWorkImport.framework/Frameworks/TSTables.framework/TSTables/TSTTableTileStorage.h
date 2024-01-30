@class NSIndexSet, TSTTableTileGroup, NSMutableIndexSet;

@interface TSTTableTileStorage : TSPContainedObject <TSTCompatibilityVersionProviding> {
    NSMutableIndexSet *_tileIDSet;
    TSTTableTileGroup *_tileGroups[16];
}

@property (class, readonly, nonatomic) unsigned int tileSize;

@property (readonly, nonatomic) BOOL isEmbiggened;
@property (readonly, nonatomic) unsigned long long nextTileID;
@property (readonly, nonatomic) unsigned int lastPopulatedRowIndex;
@property (readonly, nonatomic) NSIndexSet *populatedTiles;
@property (readonly, nonatomic) NSIndexSet *populatedRows;
@property (readonly, nonatomic) BOOL needToUpgradeCellStorage;
@property (readonly, nonatomic) BOOL upgradeRepairedTiles;
@property (nonatomic) BOOL shouldUseWideRows;
@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion;

+ (id)_sharedQueue;

- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithOwner:(id)a0;
- (id)rowInfoAtIndex:(unsigned int)a0;
- (BOOL)auditRowInfoCellCountsReturningResult:(id *)a0;
- (void)prepareToApplyConcurrentCellMap:(id)a0;
- (void)removeRowsAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)removeColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (void)moveRowIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned int)a1;
- (void)moveColumnIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned short)a1;
- (void)swapRowAtIndex:(unsigned int)a0 withRowAtIndex:(unsigned int)a1;
- (void)insertColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (id)_createTileWithID:(unsigned long long)a0;
- (id)_groupForTileID:(unsigned long long)a0;
- (void)pruneTilesForRows:(id)a0;
- (void)_upgradeFromTileIDMap:(struct vector<std::__1::pair<unsigned int, unsigned long>, std::__1::allocator<std::__1::pair<unsigned int, unsigned long> > > { struct pair<unsigned int, unsigned long> *x0; struct pair<unsigned int, unsigned long> *x1; struct __compressed_pair<std::__1::pair<unsigned int, unsigned long> *, std::__1::allocator<std::__1::pair<unsigned int, unsigned long> > > { struct pair<unsigned int, unsigned long> *x0; } x2; } *)a0 referenceMap:(struct unordered_map<unsigned long, TSPLazyReference *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSPLazyReference *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, TSPLazyReference *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, std::__1::hash<unsigned long>, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, TSPLazyReference *>, std::__1::equal_to<unsigned long>, true> > { float x0; } x3; } x0; } *)a1;
- (id)_tileForID:(unsigned long long)a0 createIfMissing:(BOOL)a1;
- (BOOL)isEmbiggened;
- (void)_enumerateLoadedTiles:(id /* block */)a0;
- (void)enumerateTilesConcurrentlyUsingBlock:(id /* block */)a0;
- (void)_setTile:(id)a0 forID:(unsigned long long)a1;
- (void)_enumerateGroups:(id /* block */)a0;
- (void)_removeTileForID:(unsigned long long)a0;
- (void)_shiftRowsDownAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (id)_yankRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_spliceRows:(id)a0 atIndex:(unsigned int)a1;
- (void)_clearContentAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)_shiftRowsUpAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)_enumerateTiles:(id /* block */)a0;
- (void)_insertRowsAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)_removeRowsAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)enumerateRowsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (id)initWithStorageArchive:(const struct TileStorage { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TileStorage_Tile> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; BOOL x6; } *)a0 treeArchive:(const struct TableRBTree { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TableRBTree_Node> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a1 nextTileID:(unsigned long long)a2 unarchiver:(id)a3 owner:(id)a4;
- (void)saveToStorageArchive:(struct TileStorage { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TileStorage_Tile> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; BOOL x6; } *)a0 treeArchive:(struct TableRBTree { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TableRBTree_Node> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a1 archiver:(id)a2;
- (void)enumerateRowByRowInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (id)tileForWritingAtRowIndex:(unsigned int)a0 outTileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)tileStartingAtOrBeforeRowIndex:(unsigned int)a0 outTileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)tileStartingAtOrAfterRowIndex:(unsigned int)a0 outTileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)insertRowsAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (id)columnCellCountsOfRowsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pruneTileForRowIndex:(unsigned int)a0;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withDataStore:(id)a1 result:(id *)a2;
- (void)widenTilesForUpgrade;
- (struct multimap<TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *> > > > { struct __tree<std::__1::__value_type<TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *> >, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *> >, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, std::__1::tuple<unsigned int, unsigned long, TSTCellStorage *> >, std::__1::less<TSUCellCoord>, true> > { unsigned long long x0; } x2; } x0; })makeStorageMap;

@end
