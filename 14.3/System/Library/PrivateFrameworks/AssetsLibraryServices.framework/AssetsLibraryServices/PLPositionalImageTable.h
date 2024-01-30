@class PLImageFormat, NSString;

@interface PLPositionalImageTable : NSObject <PLThumbPersistenceManager> {
    struct tagPLImageTableMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; int x2; void *x3; void *x4; unsigned long long x5; } *_pool;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expansionLock;
}

@property (nonatomic) int descriptor;
@property (nonatomic) long long entryCapacity;
@property (nonatomic) BOOL formatIsCropped;
@property (nonatomic) int formatSideLen;
@property (nonatomic) unsigned long long entryLength;
@property (nonatomic) BOOL flushAfterWrite;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) PLImageFormat *format;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_debugDescription;
- (void)dealloc;
- (BOOL)writeEntryData:(id)a0 toIndex:(unsigned long long)a1;
- (void)deleteEntryWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 uuid:(id)a2;
- (struct CGImage { } *)createImageWithIdentifier:(id)a0 orIndex:(unsigned long long)a1;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (void)flush;
- (void)preheatDataForThumbnailIndexes:(id)a0;
- (id)initWithPath:(id)a0 readOnly:(BOOL)a1 format:(id)a2;
- (void)touchEntriesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)fileLength;
- (BOOL)_setEntryCapacity:(long long)a0;
- (BOOL)_increaseEntryCapacityIfNeededToStoreIndex:(long long)a0;
- (BOOL)validateData:(id)a0 withToken:(id)a1;
- (id)imageDataWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 dataOffset:(int *)a7;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (BOOL)usesThumbIdentifiers;

@end
