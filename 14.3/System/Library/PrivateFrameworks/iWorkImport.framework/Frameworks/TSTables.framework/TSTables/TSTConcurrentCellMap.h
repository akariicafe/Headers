@class NSMutableArray;

@interface TSTConcurrentCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering>

@property (nonatomic, getter=isUIDBased) BOOL uidBased;
@property (retain, nonatomic) NSMutableArray *cellLists;
@property (retain, nonatomic) NSMutableArray *mergeActions;
@property (retain, nonatomic) NSMutableArray *inverseMergeActions;
@property (nonatomic) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } cachedRowUIDs;
@property (nonatomic) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } cachedColumnUIDs;
@property (nonatomic) BOOL applyingToTable;
@property (nonatomic) BOOL mayModifyFormulasInCells;
@property (nonatomic) BOOL mayModifyValuesReferencedByFormulas;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (unsigned long long)cellCount;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 uidBased:(BOOL)a1;
- (id)changeDescriptorsForTable:(id)a0;
- (void)clearDataListIDs;
- (void)appendCellLists:(id)a0;
- (BOOL)hasCells;
- (void)convertToUuidBasedCellMapUsingTableInfo:(id)a0 pruneCategorizedCells:(BOOL)a1;
- (void)willApplyToTable:(id)a0;
- (BOOL)containsCellBorderChanges;
- (void)accumulateCurrentCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)enumerateCellsAddedAndRemovedOfType:(long long)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)columnUIDs;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)rowUIDs;
- (void)addMergeAction:(id)a0;
- (BOOL)containsMergeChanges;
- (void)p_cacheRowColumnUIDs;
- (id)cellRegionWithTableInfo:(id)a0;
- (struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *x0; struct UUIDRect<TSP::UUIDRect> *x1; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *x0; } x2; })cellUIDRanges;
- (struct vector<TSUViewCellRect, std::__1::allocator<TSUViewCellRect> > { struct TSUViewCellRect *x0; struct TSUViewCellRect *x1; struct __compressed_pair<TSUViewCellRect *, std::__1::allocator<TSUViewCellRect> > { struct TSUViewCellRect *x0; } x2; })viewCellRects;
- (void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id /* block */)a0;
- (void)p_enumerateNewAndOldCellsSeriallyUsingPreBNCBlock:(id /* block */)a0;
- (void)p_enumerateCellsAddedAndRemovedForFormatsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)containsCellChanges;
- (BOOL)hasMultipleCells;
- (void)appendCellList:(id)a0;
- (id)affectedBaseColumnAndRowIndexes;
- (id)cellRegionWithTableInfo:(id)a0 passingTest:(id /* block */)a1;
- (void)enumerateSeriallyUsingBlock:(id /* block */)a0;
- (void)gatherRowState:(id /* block */)a0;
- (void)enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)updateDataListsConcurrentlyUsingCommentStorageBlock:(id /* block */)a0 conditionalStyleSetBlock:(id /* block */)a1 controlCellSpecBlock:(id /* block */)a2 formulaBlock:(id /* block */)a3 formulaErrorBlock:(id /* block */)a4 importWarningSetBlock:(id /* block */)a5 richTextBlock:(id /* block */)a6 stringBlock:(id /* block */)a7 styleBlock:(id /* block */)a8 customFormatBlock:(id /* block */)a9 formatBlock:(id /* block */)a10 preBNCBlock:(id /* block */)a11;
- (void)enumerateColumnCellCountDiffUsingBlock:(id /* block */)a0;
- (void)enumerateRowCellCountDiffUsingBlock:(id /* block */)a0;
- (void)enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id /* block */)a0;
- (void)convertToInverseCellMap;
- (void)addMergeActions:(id)a0;
- (void)pushInverseMergeAction:(id)a0;
- (void)clearMerges;

@end
