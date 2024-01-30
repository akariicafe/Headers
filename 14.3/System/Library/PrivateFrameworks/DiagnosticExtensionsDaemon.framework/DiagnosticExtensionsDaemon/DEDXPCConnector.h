@class NSXPCListener, NSString, DEDXPCInbound, NSXPCConnection, NSObject;
@protocol OS_os_log, DEDXPCConnectorDaemonDelegate;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDXPCInbound *inbound;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCListener *listener;
@property unsigned long long connType;
@property BOOL isDaemon;
@property BOOL started;
@property (weak) id<DEDXPCConnectorDaemonDelegate> daemonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)configureXPCInbound:(id)a0;
- (void)configureConnectionType:(unsigned long long)a0;
- (void)configureDaemonModeWithDelegate:(id)a0;
- (void)startForDaemon;
- (void)startForApp;
- (BOOL)validateConnection:(id)a0;
- (id)_whitelistedXPCInterface;
- (id)connectionWithEndpoint:(id)a0 forMachService:(id)a1;

@end
