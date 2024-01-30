@class NSObject;
@protocol SpotlightDaemonClient;

@interface SpotlightDaemonClientConnection : CSXPCConnection

@property (readonly, nonatomic) NSObject<SpotlightDaemonClient> *spotlightDaemonClient;

- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (void).cxx_destruct;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (id)initWithClient:(id)a0 forServiceName:(id)a1;

@end
