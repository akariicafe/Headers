@class NSMutableIndexSet;

@interface TSTConcurrentSparseCellList : TSTConcurrentCellList

@property (retain, nonatomic) NSMutableIndexSet *validCells;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)cellCount;
- (void)addCell:(id)a0 atViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (BOOL)hasCells;
- (void)p_accumulateCurrentCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)p_invokeBlock:(id /* block */)a0;
- (void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0 viewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1 cellUIDRange:(struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } x0; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } x1; })a2;
- (void)p_pruneCellsAtRow:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;
- (void)p_pruneCellsAtColumn:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;

@end
