@class NSMutableArray, NSString, GKSimpleTimer, NSMutableData, GKAsyncSocket, NSObject;
@protocol OS_dispatch_queue;

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate> {
    BOOL _connected;
    GKAsyncSocket *_connectionSocket;
    NSMutableData *_dataReceived;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    GKSimpleTimer *_heartbeatTimer;
    GKSimpleTimer *_heartbeatTimeoutTimer;
    GKSimpleTimer *_timeoutTimer;
    double _connectionTimeoutInSeconds;
    double _heartbeatIntervalInSeconds;
}

@property (copy, nonatomic) NSString *remoteServiceName;
@property (copy, nonatomic) NSString *localServiceName;
@property (copy, nonatomic) id /* block */ receiveDataHandler;
@property (copy, nonatomic) id /* block */ connectedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

+ (void)checkConstants;
+ (unsigned long long)receiveDataLimit;
+ (unsigned long long)sendDataLimit;

- (void)dealloc;
- (void)invalidate;
- (void)timeout:(id)a0;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithLocalServiceName:(id)a0;
- (BOOL)shouldDecideAboutConnection;
- (void)syncAcceptedConnection;
- (void)syncCloseConnectionNow;
- (void)syncProcessMessage:(int)a0 data:(id)a1 sequenceNumber:(unsigned int)a2;
- (void)syncReceivedData:(id)a0 error:(id)a1;
- (void)syncSendAccept;
- (void)syncSendHello;
- (void)syncSendMessage:(int)a0 data:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)syncSendMessageReceipt:(int)a0 sequenceNumber:(unsigned int)a1;
- (void)attachSocketDescriptor:(int)a0;
- (void)connectToSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 port:(unsigned short)a1;
- (void)syncConnected:(id)a0;
- (BOOL)syncSetupNewSocket;

@end
