@class TSTCell;

@interface TSTTableTileRowInfo : NSObject <TSTCompatibilityVersionProviding> {
    struct TSTTableTileRowBuffer { struct { char *cellData; unsigned long long cellBufferSize; unsigned long long allocatedCellBufferSize; unsigned short *offsets; unsigned short offsetBufferCount; BOOL wideOffsets; } _private; } _currentData;
    struct TSTTableTileRowBuffer { struct { char *cellData; unsigned long long cellBufferSize; unsigned long long allocatedCellBufferSize; unsigned short *offsets; unsigned short offsetBufferCount; BOOL wideOffsets; } _private; } _preBNCData;
    unsigned short _maxColumnIndexPrivate;
    BOOL _maxColumnIndexIsValidPrivate;
    unsigned char _storageVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    TSTCell *_emptyCellForPreBNC;
}

@property (nonatomic) unsigned int tileRowIndex;
@property (readonly, nonatomic) BOOL usesWideOffsets;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) unsigned short maxColumnIndex;
@property (readonly, nonatomic) BOOL bncStorageBufferExists;
@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion;

+ (id)rowInfoFromArchive:(const void *)a0;
+ (id)rowInfoWithTileRowIndex:(unsigned int)a0 wideOffsets:(BOOL)a1;

- (void)validate;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0;
- (unsigned short)_archivedColumnCount;
- (void)_insertCell:(id)a0 atIndex:(unsigned short)a1;
- (void)_removeCellAtIndex:(unsigned short)a0;
- (void)_replaceCellAtIndex:(unsigned short)a0 withCell:(id)a1;
- (struct vector<TSTCell *, std::allocator<TSTCell *>> { id *x0; id *x1; struct __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> { id *x0; } x2; })accumulateCurrentCellsConcurrentlyAtColumns:(void *)a0 usingCellCreationBlock:(id /* block */)a1;
- (unsigned short)cellIndexAtOrAfterIndex:(unsigned short)a0;
- (unsigned short)cellIndexAtOrBeforeIndex:(unsigned short)a0;
- (struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned short x2 : 16; unsigned short x3 : 16; unsigned short x4 : 16; unsigned int x5 : 32; } x0; unsigned char x1[0]; } *)cellStorageRefAtIndex:(unsigned short)a0;
- (void)convertToWideOffsets;
- (void)enumerateStoragesInColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 getPreBNC:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)enumerateStoragesInColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (id)initWithTileRowIndex:(unsigned int)a0 wideOffsets:(BOOL)a1;
- (void)insertColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (void)lockForConcurrentAccess;
- (void)moveColumnsFromIndex:(unsigned short)a0 toIndex:(unsigned short)a1 count:(unsigned int)a2;
- (id)p_emptyCell;
- (struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned short x2 : 16; unsigned short x3 : 16; unsigned short x4 : 16; unsigned int x5 : 32; } x0; unsigned char x1[0]; } *)p_preBNCStorageRefAtIndex:(unsigned short)a0;
- (unsigned long long)removeColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (BOOL)searchCellStorageRefAtColumnIndex:(unsigned short)a0 searchMask:(unsigned long long)a1;
- (long long)setCell:(id)a0 atIndex:(unsigned short)a1;
- (void)unlockForConcurrentAccess;
- (BOOL)validateWithResult:(id *)a0;

@end
