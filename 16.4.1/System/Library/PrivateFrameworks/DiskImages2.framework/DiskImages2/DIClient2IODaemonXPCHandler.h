@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (void)createConnection;
- (id)remoteObjectInterface;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)addToRefCountWithError:(id *)a0;

@end
