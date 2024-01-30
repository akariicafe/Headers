@class NSString;

@interface PLPositionalTable : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expansionLock;
}

@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL isReadOnly;
@property (nonatomic) int descriptor;
@property (nonatomic) long long entryCapacity;
@property (nonatomic) unsigned long long entryLength;
@property (readonly, nonatomic) long long fileLength;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) struct tagPLPositionalTableMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; int x2; void *x3; void *x4; unsigned long long x5; } *pool;
@property (nonatomic) BOOL flushAfterWrite;

- (void)flush;
- (void)dealloc;
- (void).cxx_destruct;
- (void)touchEntriesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)deleteEntryAtIndex:(unsigned long long)a0;
- (id)fileStatistics;
- (BOOL)writeEntryData:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)isEmptyAtIndex:(unsigned long long)a0;
- (BOOL)_increaseEntryCapacityIfNeededToStoreIndex:(long long)a0;
- (BOOL)_setEntryCapacity:(long long)a0;
- (Class)entriesClass;
- (id)initWithPath:(id)a0 readOnly:(BOOL)a1 entryLength:(unsigned long long)a2;
- (BOOL)readDataAtIndex:(unsigned long long)a0 intoPoolNode:(struct tagPLPositionalTableMemoryPoolNode { void *x0; struct tagPLPositionalTableMemoryPool *x1; BOOL x2; struct tagPLPositionalTableMemoryPoolNode *x3; } *)a1 bytesRead:(unsigned long long *)a2;
- (id)readEntriesAtIndexes:(id)a0;

@end
