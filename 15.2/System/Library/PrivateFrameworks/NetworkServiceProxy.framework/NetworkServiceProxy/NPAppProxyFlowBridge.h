@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;
@protocol OS_nw_connection, OS_dispatch_queue, OS_os_transaction;

@interface NPAppProxyFlowBridge : NSObject

@property (retain) NEAppProxyFlow *flow;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NSError *connectionError;
@property int currentState;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_transaction> *networkTransaction;

- (void).cxx_destruct;
- (void)startConnection;
- (void)readDataFromClient;
- (void)readDataFromConnection;
- (void)readMultipleFromClient;
- (void)readMultipleFromConnection;
- (void)writeMultipleToConnection:(id *)a0 count:(unsigned int)a1;
- (void)writeDataToConnection:(id)a0;
- (void)startSendReceiveLoop;
- (id)initWithAppProxyFlow:(id)a0;

@end
