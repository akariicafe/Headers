@class NSString, NSSet, DTXChannel, _DT_GCDAsyncSocket;

@interface DTAssetHTTPRequestHandler : NSObject <GCDAsyncSocketDelegate> {
    struct __CFHTTPMessage { } *_httpMessage;
}

@property (retain) DTXChannel *channel;
@property (retain) _DT_GCDAsyncSocket *socket;
@property (copy) id /* block */ completion;
@property BOOL sentHeader;
@property unsigned long long dataSent;
@property (readonly) NSString *identifier;
@property (retain, nonatomic) NSSet *allowedResources;

- (void)startReading;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSocket:(id)a0 channel:(id)a1;
- (void)receivedMessage:(id)a0;
- (void)requestAssetAtPath:(id)a0;
- (void)sendDataChunk:(id)a0;
- (void)serveErrorMessageForError:(id)a0;
- (void)serveResponseAndDisconnect:(struct __CFHTTPMessage { } *)a0;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;

@end
