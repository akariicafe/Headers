@class NSThread, NSFileHandle;
@protocol SCRDFileReaderDelegate;

@interface SCRDFileReader : NSObject {
    id<SCRDFileReaderDelegate> _delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}

- (void)start;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)hasStarted;
- (void)dealloc;
- (BOOL)isValid;
- (void)_readHandler:(id)a0;
- (void)invalidateWithWait:(BOOL)a0;
- (id)initWithDelegate:(id)a0 fileHandle:(id)a1;

@end
