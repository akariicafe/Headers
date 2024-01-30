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

- (BOOL)doesExist;
- (BOOL)deleteBlobsWithArray:(id)a0;
- (id)reserveBufferWithLength:(unsigned long long)a0;
- (BOOL)deleteBlobWithInfo:(id)a0;
- (BOOL)isOpen;
- (id)checkConsistency:(id)a0;
- (void)validateReservedBufferWithBlobInfo:(id)a0;
- (void)save;
- (void)compactFragmentation;
- (id)initWithPath:(id)a0 cacheSize:(long long)a1 cacheThread:(id)a2;
- (void)open;
- (BOOL)isValid;
- (id)copyBlobWithInfo:(id)a0;
- (void)close;
- (void)discardReservedBufferWithBlobInfo:(id)a0;
- (id)cacheHolesOrderedByStart;
- (void *)bufferPointedToByBlobInfo:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
