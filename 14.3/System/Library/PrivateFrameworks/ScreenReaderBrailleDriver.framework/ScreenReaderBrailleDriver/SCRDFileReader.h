@class NSThread, NSFileHandle;
@protocol SCRDFileReaderDelegate;

@interface SCRDFileReader : NSObject {
    id<SCRDFileReaderDelegate> _delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasStarted;
- (BOOL)isValid;
- (void)start;
- (void)invalidate;
- (void)_readHandler:(id)a0;
- (void)invalidateWithWait:(BOOL)a0;
- (id)initWithDelegate:(id)a0 fileHandle:(id)a1;

@end
