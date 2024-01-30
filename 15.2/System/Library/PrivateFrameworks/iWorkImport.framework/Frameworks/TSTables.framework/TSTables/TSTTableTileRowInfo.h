@interface TSTTableTileRowInfo : NSObject <TSTCompatibilityVersionProviding> {
    struct TSTTableTileRowBuffer { struct { char *cellData; unsigned long long cellBufferSize; unsigned long long allocatedCellBufferSize; unsigned short *offsets; unsigned short offsetBufferCount; BOOL wideOffsets; } _private; } _currentData;
    struct TSTTableTileRowBuffer { struct { char *cellData; unsigned long long cellBufferSize; unsigned long long allocatedCellBufferSize; unsigned short *offsets; unsigned short offsetBufferCount; BOOL wideOffsets; } _private; } _preBNCData;
    unsigned short _maxColumnIndexPrivate;
    BOOL _maxColumnIndexIsValidPrivate;
    unsigned char _storageVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
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
- (id)description;
- (void)dealloc;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)removeColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (void)convertToWideOffsets;
- (struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned short x2 : 16; unsigned short x3 : 16; unsigned short x4 : 16; unsigned int x5 : 32; } x0; unsigned char x1[0]; } *)cellStorageRefAtIndex:(unsigned short)a0;
- (struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned short x2 : 16; unsigned short x3 : 16; unsigned short x4 : 16; unsigned int x5 : 32; } x0; unsigned char x1[0]; } *)preBNCStorageRefAtIndex:(unsigned short)a0;
- (long long)setCell:(id)a0 atIndex:(unsigned short)a1 formatKeys:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; } *)a2;
- (void)insertColumnsAtIndex:(unsigned short)a0 count:(unsigned int)a1;
- (void)moveColumnsFromIndex:(unsigned short)a0 toIndex:(unsigned short)a1 count:(unsigned int)a2;
- (id)initWithTileRowIndex:(unsigned int)a0 wideOffsets:(BOOL)a1;
- (unsigned short)_archivedColumnCount;
- (void)_replaceCellAtIndex:(unsigned short)a0 withCell:(id)a1 formatKeys:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; } *)a2;
- (void)_insertCell:(id)a0 atIndex:(unsigned short)a1 formatKeys:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; } *)a2;
- (void)_removeCellAtIndex:(unsigned short)a0;
- (void)enumerateStoragesInColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 getPreBNC:(BOOL)a1 withBlock:(id /* block */)a2;
- (BOOL)validateWithResult:(id *)a0;
- (struct vector<TSTCell *, std::allocator<TSTCell *>> { id *x0; id *x1; struct __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> { id *x0; } x2; })accumulateCurrentCellsConcurrentlyAtColumns:(void *)a0 usingCellCreationBlock:(id /* block */)a1;
- (void)lockForConcurrentAccess;
- (void)unlockForConcurrentAccess;
- (unsigned short)cellIndexAtOrAfterIndex:(unsigned short)a0;
- (unsigned short)cellIndexAtOrBeforeIndex:(unsigned short)a0;
- (void)enumerateStoragesInColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (BOOL)searchCellStorageRefAtColumnIndex:(unsigned short)a0 searchMask:(unsigned long long)a1;

@end
