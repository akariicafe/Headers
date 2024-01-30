@class NSSet, _DT_GCDAsyncSocket, DTXChannel, NSObject;
@protocol OS_dispatch_queue;

@interface DTAssetHTTPServer : NSObject <GCDAsyncSocketDelegate>

@property (retain) _DT_GCDAsyncSocket *socket;
@property (retain) NSObject<OS_dispatch_queue> *socketDelegateQueue;
@property (readonly) unsigned long long port;
@property (retain) DTXChannel *channel;
@property (retain, nonatomic) NSSet *allowedResources;

- (void)stopListening;
- (void).cxx_destruct;
- (BOOL)startListeningWithError:(id *)a0;
- (void)socket:(id)a0 didAcceptNewSocket:(id)a1;

@end
