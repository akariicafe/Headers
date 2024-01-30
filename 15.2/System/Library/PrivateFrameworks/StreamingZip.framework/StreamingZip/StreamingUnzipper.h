@class NSObject, StreamingUnzipState, NSXPCConnection;
@protocol OS_dispatch_queue, StreamingUnzipDelegateProtocol, OS_os_transaction;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol> {
    long long _sandboxToken;
    void *_decompressionOutputBuffer;
    StreamingUnzipState *_currentState;
    NSObject<OS_os_transaction> *_sessionTransaction;
    int _activeDelegateMethods;
    double _lastExtractionProgressSent;
}

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue;

- (void).cxx_destruct;
- (id)initForClient:(id)a0;
- (void)dealloc;
- (void)setupUnzipperWithOutputPath:(id)a0 sandboxExtensionToken:(char *)a1 options:(id)a2 withReply:(id /* block */)a3;
- (void)supplyBytes:(id)a0 withReply:(id /* block */)a1;
- (void)suspendStreamWithReply:(id /* block */)a0;
- (void)finishStreamWithReply:(id /* block */)a0;
- (void)terminateStreamWithReply:(id /* block */)a0;
- (void)setActiveDelegateMethods:(int)a0;
- (void)_extractionEnteredPassThroughMode;
- (void)_setErrorState;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)_sendExtractionProgress:(double)a0;
- (void)_sendExtractionCompleteAtArchivePath:(id)a0;
- (void)_supplyBytes:(const char *)a0 length:(unsigned long long)a1 withReply:(id /* block */)a2;

@end
