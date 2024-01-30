@interface TSTWidthHeightCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    struct vector<TSTWidthHeightCacheEntry<4>, std::allocator<TSTWidthHeightCacheEntry<4>>> { void *__begin_; void *__end_; struct __compressed_pair<TSTWidthHeightCacheEntry<4> *, std::allocator<TSTWidthHeightCacheEntry<4>>> { void *__value_; } __end_cap_; } _rowHeights;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _columnModelWidths;
}

@property (nonatomic) BOOL needsToBeArchived;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned int numberOfColumns;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resetModelCache;
- (double)getFitHeightForRow:(unsigned int)a0;
- (double)getModelHeightForRow:(unsigned int)a0;
- (double)getModelWidthForColumn:(unsigned short)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)resetModelCacheRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)setFitHeight:(double)a0 forCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)setModelHeight:(double)a0 forRow:(unsigned int)a1;
- (void)setModelWidth:(double)a0 forColumn:(unsigned short)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)columnToWidthMapFromCollectionArray:(id)a0;
- (void)finalizeLayoutPassWithRowsNeedingFittingInfo:(id)a0;
- (void)getFitHeight:(double *)a0 andModelHeight:(double *)a1 forRow:(unsigned int)a2;
- (id)initWithNumRows:(unsigned int)a0 andNumColumns:(unsigned int)a1;
- (id)p_deleteColumnsStartingWith:(unsigned short)a0 upToColumn:(unsigned short)a1;
- (void)p_deleteRowsStartingWith:(unsigned int)a0 upToRow:(unsigned int)a1;
- (BOOL)p_insertColumns:(unsigned int)a0 atColumn:(unsigned short)a1;
- (BOOL)p_insertRows:(unsigned int)a0 atRow:(unsigned int)a1;
- (void)p_moveColumnsFrom:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 toColumn:(unsigned short)a1;
- (void)p_moveRowsFrom:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 toRow:(unsigned int)a1;
- (void)p_moveRowsUsingShuffleMapping:(id)a0;
- (id)p_resetFittingHeightsForRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)p_resetToRows:(unsigned int)a0 andNumColumns:(unsigned int)a1;
- (void)p_setFittingHeightsFromCollectionWithLock:(id)a0;
- (void)resetFittingRowHeightsStartingWith:(unsigned int)a0 upToRow:(unsigned int)a1;
- (void)setFittingHeightsFromCollection:(id)a0;
- (void)setFittingHeightsFromCollectionArray:(id)a0;
- (id)validateChangeDescriptors:(id)a0 tableInfo:(id)a1 numberOfRows:(unsigned int)a2 numberOfColumns:(unsigned short)a3;
- (id)validateRowsNeedingFittingInfo:(id)a0 validationRegion:(id)a1 layoutEngine:(id)a2;
- (void)willModifyIfNeeded:(id)a0;
- (void)willModifyIfPossible:(id)a0;

@end
