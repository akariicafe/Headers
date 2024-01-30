@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface NPAppProxyFlowBridge : NSObject

@property (retain) NEAppProxyFlow *flow;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NSError *connectionError;
@property int currentState;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)startConnection;
- (void)readDataFromClient;
- (void)readMultipleFromClient;
- (void)readMultipleFromConnection;
- (void)readDataFromConnection;
- (void)writeMultipleToConnection:(id *)a0 count:(unsigned int)a1;
- (void)writeDataToConnection:(id)a0;
- (id)initWithAppProxyFlow:(id)a0;

@end
