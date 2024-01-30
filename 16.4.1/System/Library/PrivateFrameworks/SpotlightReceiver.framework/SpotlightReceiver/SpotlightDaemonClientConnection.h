@class NSObject;
@protocol SpotlightDaemonClient;

@interface SpotlightDaemonClientConnection : CSXPCConnection

@property (readonly, nonatomic) NSObject<SpotlightDaemonClient> *spotlightDaemonClient;

- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 forServiceName:(id)a1;

@end
