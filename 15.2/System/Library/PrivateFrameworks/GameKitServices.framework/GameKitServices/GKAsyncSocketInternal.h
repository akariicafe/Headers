@class NSMutableData, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GKAsyncSocketInternal : GKAsyncSocket {
    NSObject<OS_dispatch_source> *_receiveSource;
    NSObject<OS_dispatch_source> *_sendSource;
    BOOL _sendSourceSuspended;
    BOOL _invalidated;
    int _connectionSocket;
    NSMutableData *_dataToSend;
    id /* block */ _receiveDataHandler;
    id /* block */ _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSString *_socketName;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (id /* block */)receiveDataHandler;
- (id)init;
- (void)invalidate;
- (void)setReceiveDataHandler:(id /* block */)a0;
- (void)dealloc;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id /* block */)connectedHandler;
- (void)setConnectedHandler:(id /* block */)a0;
- (void)sendData;
- (void)setSocketName:(id)a0;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 port:(unsigned short)a1;
- (id)socketName;
- (void)tcpAttachSocketDescriptor:(int)a0;
- (void)receiveData;
- (BOOL)setupSourcesWithSocket:(int)a0 receiveEventHandler:(id /* block */)a1 sendEventHandler:(id /* block */)a2;
- (void)closeConnectionNow;

@end
