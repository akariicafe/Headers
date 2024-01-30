@class SiriCoreDataDecompressor, GCDAsyncSocket, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data, STAceObjectHandler;

@interface STProxyConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    id<STAceObjectHandler> _handler;
    GCDAsyncSocket *_socket;
    BOOL _isOpened;
    BOOL _isCanceled;
    BOOL _isFinished;
    SiriCoreDataDecompressor *_inputDecompressor;
    struct __CFHTTPMessage { } *_httpRequestHeader;
}

- (void)_cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)parseData:(id)a0;
- (id)_httpHeaderData;
- (id)_aceHeaderData;
- (BOOL)_hasReadHTTPHeader;
- (id)_tryReadingAceHeaderFromData:(id)a0 bytesParsed:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_tryReadingParsedDataFromBytes:(const void *)a0 length:(unsigned long long)a1 packet:(struct { unsigned char x0; unsigned int x1; } *)a2 object:(id *)a3 bytesParsed:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)_consumeHTTPHeaderWithData:(id)a0 bytesRead:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_consumeAceHeaderWithData:(id)a0 bytesRead:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_consumeAceDataWithData:(id)a0 bytesRead:(unsigned long long *)a1 error:(id *)a2;
- (void)_connectionHasBytesAvailable:(id)a0;
- (id)initWithSocket:(id)a0 handler:(id)a1 replayFileURL:(id)a2;
- (BOOL)_hasReadAceHeader;
- (void)handleAceObject:(id)a0;
- (void)handlePacket:(struct { unsigned char x0; unsigned int x1; } *)a0;

@end
