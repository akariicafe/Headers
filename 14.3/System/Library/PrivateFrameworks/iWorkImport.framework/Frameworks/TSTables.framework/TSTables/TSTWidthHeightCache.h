@interface TSTWidthHeightCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    struct vector<TSTWidthHeightCacheEntry<4>, std::__1::allocator<TSTWidthHeightCacheEntry<4> > > { struct TSTWidthHeightCacheEntry<4> *__begin_; struct TSTWidthHeightCacheEntry<4> *__end_; struct __compressed_pair<TSTWidthHeightCacheEntry<4> *, std::__1::allocator<TSTWidthHeightCacheEntry<4> > > { struct TSTWidthHeightCacheEntry<4> *__value_; } __end_cap_; } _rowHeights;
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } _columnModelWidths;
}

@property (nonatomic) BOOL needsToBeArchived;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned int numberOfColumns;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithArchive:(const struct WidthHeightCache { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::WidthHeightCacheFittingEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; } *)a0 unarchiver:(id)a1;
- (void)setModelHeight:(double)a0 forRow:(unsigned int)a1;
- (void)setModelWidth:(double)a0 forColumn:(unsigned short)a1;
- (void)resetModelCache;
- (double)getModelHeightForRow:(unsigned int)a0;
- (double)getFitHeightForRow:(unsigned int)a0;
- (double)getModelWidthForColumn:(unsigned short)a0;
- (void)setFitHeight:(double)a0 forCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)resetModelCacheRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)saveToArchive:(struct WidthHeightCache { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::WidthHeightCacheFittingEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; } *)a0 archiver:(id)a1;
- (void)getFitHeight:(double *)a0 andModelHeight:(double *)a1 forRow:(unsigned int)a2;
- (void)resetFittingRowHeightsStartingWith:(unsigned int)a0 upToRow:(unsigned int)a1;
- (id)validateChangeDescriptors:(id)a0 tableInfo:(id)a1 numberOfRows:(unsigned int)a2 numberOfColumns:(unsigned short)a3;
- (id)validateRowsNeedingFittingInfo:(id)a0 validationRegion:(id)a1 masterLayout:(id)a2;
- (void)finalizeLayoutPassWithRowsNeedingFittingInfo:(id)a0;
- (void)willModifyIfNeeded:(id)a0;
- (id)columnToWidthMapFromCollectionArray:(id)a0;
- (void)setFittingHeightsFromCollectionArray:(id)a0;
- (void)p_resetToRows:(unsigned int)a0 andNumColumns:(unsigned int)a1;
- (void)p_setFittingHeightsFromCollectionWithLock:(id)a0;
- (void)willModifyIfPossible:(id)a0;
- (void)p_deleteRowsStartingWith:(unsigned int)a0 upToRow:(unsigned int)a1;
- (BOOL)p_insertRows:(unsigned int)a0 atRow:(unsigned int)a1;
- (id)p_deleteColumnsStartingWith:(unsigned short)a0 upToColumn:(unsigned short)a1;
- (BOOL)p_insertColumns:(unsigned int)a0 atColumn:(unsigned short)a1;
- (void)p_moveRowsUsingShuffleMapping:(id)a0;
- (void)p_moveRowsFrom:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 toRow:(unsigned int)a1;
- (void)p_moveColumnsFrom:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 toColumn:(unsigned short)a1;
- (id)p_resetFittingHeightsForRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)initWithNumRows:(unsigned int)a0 andNumColumns:(unsigned int)a1;
- (void)setFittingHeightsFromCollection:(id)a0;

@end
