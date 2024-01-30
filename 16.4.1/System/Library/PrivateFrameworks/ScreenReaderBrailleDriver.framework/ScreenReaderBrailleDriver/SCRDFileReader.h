@class NSThread, NSFileHandle;
@protocol SCRDFileReaderDelegate;

@interface SCRDFileReader : NSObject {
    id<SCRDFileReaderDelegate> _delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}

- (BOOL)hasStarted;
- (BOOL)isValid;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_readHandler:(id)a0;
- (id)initWithDelegate:(id)a0 fileHandle:(id)a1;
- (void)invalidateWithWait:(BOOL)a0;

@end
