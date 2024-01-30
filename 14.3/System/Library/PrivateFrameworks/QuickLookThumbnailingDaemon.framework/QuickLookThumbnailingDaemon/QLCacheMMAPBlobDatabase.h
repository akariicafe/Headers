@class NSString, _QLCacheThread, QLCacheFragHandler, NSMutableArray;

@interface QLCacheMMAPBlobDatabase : NSObject {
    NSString *_path;
    QLCacheFragHandler *_fragHandler;
    int _file;
    void *_vmFile;
    NSMutableArray *_reservedBuffers;
}

@property (weak) _QLCacheThread *cacheThread;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long size;
@property (readonly) float fragmentation;

- (void)close;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (void)reset;
- (void)save;
- (BOOL)isValid;
- (void)open;
- (BOOL)doesExist;
- (id)copyBlobWithInfo:(id)a0;
- (BOOL)deleteBlobWithInfo:(id)a0;
- (id)initWithPath:(id)a0 cacheSize:(long long)a1 cacheThread:(id)a2;
- (BOOL)deleteBlobsWithArray:(id)a0;
- (void)compactFragmentation;
- (id)cacheHolesOrderedByStart;
- (id)checkConsistency:(id)a0;
- (id)reserveBufferWithLength:(unsigned long long)a0;
- (void *)bufferPointedToByBlobInfo:(id)a0;
- (void)discardReservedBufferWithBlobInfo:(id)a0;
- (void)validateReservedBufferWithBlobInfo:(id)a0;

@end
