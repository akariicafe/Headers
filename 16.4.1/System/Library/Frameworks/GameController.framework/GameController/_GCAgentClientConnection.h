@protocol _GCAgentServerInterface;

@interface _GCAgentClientConnection : _GCIPCRemoteIncomingConnection

@property (retain, nonatomic) id<_GCAgentServerInterface> server;

- (id)initWithConnection:(id)a0 fromProcess:(id)a1;

@end
