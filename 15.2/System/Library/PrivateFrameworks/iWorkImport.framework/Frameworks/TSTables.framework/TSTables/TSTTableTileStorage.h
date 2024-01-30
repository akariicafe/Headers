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

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (void)reset;
- (id)rowInfoAtIndex:(unsigned int)a0;
- (void)prepareToApplyConcurrentCellMap:(id)a0;
- (void)removeRowsAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (id)removeColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (void)moveRowIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned int)a1;
- (void)moveColumnIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned short)a1;
- (void)swapRowAtIndex:(unsigned int)a0 withRowAtIndex:(unsigned int)a1;
- (BOOL)auditRowInfoCellCountsReturningResult:(id *)a0;
- (void)insertColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (id)_createTileWithID:(unsigned long long)a0;
- (id)_groupForTileID:(unsigned long long)a0;
- (void)pruneTilesForRows:(id)a0;
- (void)_upgradeFromTileIDMap:(void *)a0 referenceMap:(void *)a1;
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
- (id)initWithStorageArchive:(const void *)a0 treeArchive:(const void *)a1 nextTileID:(unsigned long long)a2 unarchiver:(id)a3 owner:(id)a4;
- (void)saveToStorageArchive:(void *)a0 treeArchive:(void *)a1 archiver:(id)a2;
- (void)enumerateRowByRowInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (id)tileForWritingAtRowIndex:(unsigned int)a0 outTileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)tileStartingAtOrBeforeRowIndex:(unsigned int)a0 outTileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)tileStartingAtOrAfterRowIndex:(unsigned int)a0 outTileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)insertRowsAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (id)columnCellCountsOfRowsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pruneTileForRowIndex:(unsigned int)a0;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withDataStore:(id)a1 result:(id *)a2;
- (void)widenTilesForUpgrade;
- (struct multimap<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>> { struct __tree<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::tuple<unsigned int, unsigned long, TSTCellStorage *>>, std::less<TSUCellCoord>, true>> { unsigned long long x0; } x2; } x0; })makeStorageMap;

@end
