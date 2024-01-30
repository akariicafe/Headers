@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (void)createConnection;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)remoteObjectInterface;
- (BOOL)addToRefCountWithError:(id *)a0;

@end
