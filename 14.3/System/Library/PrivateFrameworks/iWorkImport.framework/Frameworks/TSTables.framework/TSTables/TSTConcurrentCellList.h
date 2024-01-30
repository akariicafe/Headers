@class NSArray, NSMutableDictionary, __end_cap_, NSMutableArray, __end_;

@interface TSTConcurrentCellList : TSPObject <NSCopying> {
    struct vector<TSTCell *, std::__1::allocator<TSTCell *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSTCell *__strong *, std::__1::allocator<TSTCell *> > { id *__value_; } x1; } _cells;
    struct vector<TSUModelRowIndex, std::__1::allocator<TSUModelRowIndex> > { struct TSUModelRowIndex *__begin_; struct TSUModelRowIndex *__end_; struct __compressed_pair<TSUModelRowIndex *, std::__1::allocator<TSUModelRowIndex> > { struct TSUModelRowIndex *__value_; } __end_cap_; } _baseRows;
    struct vector<TSUModelColumnIndex, std::__1::allocator<TSUModelColumnIndex> > { struct TSUModelColumnIndex *__begin_; struct TSUModelColumnIndex *__end_; struct __compressed_pair<TSUModelColumnIndex *, std::__1::allocator<TSUModelColumnIndex> > { struct TSUModelColumnIndex *__value_; } __end_cap_; } _baseColumns;
    struct vector<TSUViewRowIndex, std::__1::allocator<TSUViewRowIndex> > { struct TSUViewRowIndex *__begin_; struct TSUViewRowIndex *__end_; struct __compressed_pair<TSUViewRowIndex *, std::__1::allocator<TSUViewRowIndex> > { struct TSUViewRowIndex *__value_; } __end_cap_; } _viewRows;
    struct vector<TSUViewColumnIndex, std::__1::allocator<TSUViewColumnIndex> > { struct TSUViewColumnIndex *__begin_; struct TSUViewColumnIndex *__end_; struct __compressed_pair<TSUViewColumnIndex *, std::__1::allocator<TSUViewColumnIndex> > { struct TSUViewColumnIndex *__value_; } __end_cap_; } _viewColumns;
    struct vector<long, std::__1::allocator<long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *__value_; } __end_cap_; } _cellCountDiffsPerRow;
    struct vector<long, std::__1::allocator<long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *__value_; } __end_cap_; } _cellCountDiffsPerColumn;
    struct vector<TSTNineKeyStructPreBNC, std::__1::allocator<TSTNineKeyStructPreBNC> > { struct *__begin_; struct *__end_; struct __compressed_pair<TSTNineKeyStructPreBNC *, std::__1::allocator<TSTNineKeyStructPreBNC> > { struct *__value_; } __end_cap_; } _preBNCKeysList;
    struct vector<TSTCell *, std::__1::allocator<TSTCell *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSTCell *__strong *, std::__1::allocator<TSTCell *> > { id *__value_; } x1; } _oldCells;
}

@property (readonly, nonatomic, getter=isUIDBased) BOOL uidBased;
@property (nonatomic) struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } _rect; } viewCellRect;
@property (nonatomic) struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } _colIdList; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } _rowIdList; } cellUIDRange;
@property (readonly, nonatomic) BOOL hasCells;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL containsCellBorderChanges;
@property (retain, nonatomic) NSArray *interestingCells;
@property (retain, nonatomic) NSMutableDictionary *formatsAdded;
@property (retain, nonatomic) NSMutableDictionary *formatsRemoved;
@property (retain, nonatomic) NSMutableArray *tilesPerRow;
@property (retain, nonatomic) NSMutableArray *rowInfosPerRow;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)addCell:(id)a0 atViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (id)initWithContext:(id)a0 viewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1;
- (void)p_convertToUuidBasedCellListUsingTableInfo:(id)a0 pruneCategorizedCells:(BOOL)a1;
- (void)p_accumulateCurrentCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)p_clearDataListIDs;
- (id)p_baseColumnIndexes;
- (id)p_baseRowIndexes;
- (void)p_simpleInvokeBlock:(id /* block */)a0;
- (void)p_invokeBlock:(id /* block */)a0;
- (void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id /* block */)a0;
- (void)p_enumerateNewAndOldCellsSeriallyUsingPreBNCBlock:(id /* block */)a0;
- (void)p_enumerateCellsAddedAndRemovedOfType:(long long)a0 usingBlock:(id /* block */)a1;
- (void)p_enumerateCellsAddedAndRemovedForFormatsUsingBlock:(id /* block */)a0;
- (void)p_gatherRowState:(id /* block */)a0;
- (void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)p_enumerateColumnCellCountDiffUsingBlock:(id /* block */)a0;
- (void)p_enumerateRowCellCountDiffUsingBlock:(id /* block */)a0;
- (void)p_enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id /* block */)a0;
- (void)p_pruneToBaseWithTableInfo:(id)a0;
- (void)p_convertToInverseCellMap;
- (void)p_setObjectLocale:(id)a0;
- (id)initWithContext:(id)a0 viewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1 cellUIDRange:(struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } x0; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } x1; })a2;
- (void)p_pruneCellsAtRow:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;
- (void)p_pruneCellsAtColumn:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;
- (void)p_setupInterestingCells:(struct vector<TSTCell *, std::__1::allocator<TSTCell *> > { id *x0; id *x1; struct __compressed_pair<TSTCell *__strong *, std::__1::allocator<TSTCell *> > { id *x0; } x2; } *)a0 forAdding:(BOOL)a1;
- (id)initWithContext:(id)a0 cellUIDRange:(struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } x0; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } x1; })a1;

@end
