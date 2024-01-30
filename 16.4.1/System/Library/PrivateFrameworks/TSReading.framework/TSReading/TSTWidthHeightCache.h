@interface TSTWidthHeightCache : NSObject {
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::allocator<TSTWidthHeightCache_Private::WHCCol>> { struct WHCCol *__begin_; struct WHCCol *__end_; struct __compressed_pair<TSTWidthHeightCache_Private::WHCCol *, std::allocator<TSTWidthHeightCache_Private::WHCCol>> { struct WHCCol *__value_; } __end_cap_; } mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::allocator<TSTWidthHeightCache_Private::WHCRow>> { struct WHCRow *__begin_; struct WHCRow *__end_; struct __compressed_pair<TSTWidthHeightCache_Private::WHCRow *, std::allocator<TSTWidthHeightCache_Private::WHCRow>> { struct WHCRow *__value_; } __end_cap_; } mFittingRowHeight;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } mModelColumnWidth;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } mModelRowHeight;
    unsigned short mMaxRow;
    unsigned char mMaxCol;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mLock;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)resetModelCache;
- (void)_increaseColCapacity:(unsigned int)a0;
- (void)_increaseRowCapacity:(unsigned int)a0;
- (BOOL)deleteColsStartingWith:(unsigned char)a0 andEndingWith:(unsigned char)a1;
- (BOOL)deleteRowsStartingWith:(unsigned short)a0 andEndingWith:(unsigned short)a1;
- (double)getFitHeightForRow:(unsigned short)a0;
- (double)getFitWidthForCol:(unsigned char)a0;
- (id)getListOfInvalidColsInRow:(unsigned short)a0;
- (double)getModelHeightForRow:(unsigned short)a0;
- (double)getModelWidthForColumn:(unsigned char)a0;
- (id)initWithNumRows:(unsigned short)a0 andNumCols:(unsigned short)a1;
- (BOOL)insertCols:(unsigned short)a0 atColumn:(unsigned char)a1;
- (BOOL)insertRows:(unsigned short)a0 atRow:(unsigned short)a1;
- (void)logInternalState;
- (BOOL)moveColsFrom:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 toCol:(unsigned char)a1;
- (BOOL)moveRowsFrom:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 toRow:(unsigned short)a1;
- (unsigned long long)numModelColumnWidths;
- (unsigned long long)numModelRowHeights;
- (void)resetAllCol;
- (unsigned long long)resetAllInvalidColsInRow:(unsigned short)a0;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)a0 andEndingWith:(unsigned char)a1;
- (void)resetFitHeightForCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (BOOL)resetModelCacheRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (void)resetRowHeightForCell:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (void)resetRowHeightsStartingWith:(unsigned short)a0 andEndingWith:(unsigned short)a1;
- (void)resetWidthsHeightsForRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)setFitDims:(struct CGSize { double x0; double x1; })a0 forCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (BOOL)setFitHeight:(double)a0 forCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (BOOL)setFitWidth:(double)a0 forCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (BOOL)setModelHeight:(double)a0 forRow:(unsigned short)a1;
- (BOOL)setModelWidth:(double)a0 forColumn:(unsigned char)a1;
- (void)setNumsRows:(unsigned short)a0 andNumCols:(unsigned char)a1;
- (id)validateChangeDescriptors:(id)a0 tableModel:(id)a1;
- (BOOL)verifyDims:(struct CGSize { double x0; double x1; })a0 forCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;

@end
