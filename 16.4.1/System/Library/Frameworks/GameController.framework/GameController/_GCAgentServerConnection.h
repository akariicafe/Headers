@protocol _GCAgentClientInterface;

@interface _GCAgentServerConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) id<_GCAgentClientInterface> client;

- (id)initWithMachServiceName:(id)a0;
- (id)init;

@end
