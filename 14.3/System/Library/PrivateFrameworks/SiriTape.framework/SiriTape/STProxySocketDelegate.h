@class NSMutableArray, NSMutableDictionary, NSURL, STServerConnection, NSObject, GCDAsyncSocket;
@protocol OS_dispatch_queue, STAceObjectHandler;

@interface STProxySocketDelegate : NSObject <GCDAsyncSocketDelegate> {
    NSURL *_serverURL;
    NSURL *_replayURL;
    unsigned long long _port;
    BOOL _usingTLS;
    id<STAceObjectHandler> _handler;
    GCDAsyncSocket *_serverSocket;
    GCDAsyncSocket *_listenSocket;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSMutableArray *_connectedSockets;
    NSMutableDictionary *_clientConnections;
    STServerConnection *_serverConnection;
}

- (void).cxx_destruct;
- (void)socket:(id)a0 didAcceptNewSocket:(id)a1;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (id)initWithActiveServerURL:(id)a0 handler:(id)a1 replayFileURL:(id)a2;

@end
