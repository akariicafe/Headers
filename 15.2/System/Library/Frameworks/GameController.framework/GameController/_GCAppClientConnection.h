@protocol _GCAppServerInterface;

@interface _GCAppClientConnection : _GCIPCRemoteIncomingConnection

@property (retain, nonatomic) id<_GCAppServerInterface> server;

- (id)initWithConnection:(id)a0 fromProcess:(id)a1;

@end
