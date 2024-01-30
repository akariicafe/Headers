@class NSXPCListener, NSMutableDictionary, NSXPCConnection, NSArray, NSString, NSObject;
@protocol OS_os_log, DEDXPCConnectorDelegate, DEDXPCProtocol;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSXPCConnection *diagnosticextensionsdConnection;
@property (retain) NSMutableDictionary *appConnections;
@property (retain) NSXPCListener *listener;
@property unsigned long long connType;
@property BOOL isDaemon;
@property BOOL started;
@property (weak) id<DEDXPCConnectorDelegate> xpcConnectorDelegate;
@property unsigned long long connectionRestartCount;
@property (readonly) id<DEDXPCProtocol> diagnosticextensionsdXPCInterface;
@property (readonly) NSArray *clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startForDaemon;
- (BOOL)validateConnection:(id)a0;
- (id)_whitelistedXPCInterface;
- (id)remoteXPCObjectForApplicationPid:(id)a0;
- (id)_connectionForPid:(id)a0;
- (id)connectionWithEndpoint:(id)a0 forMachService:(id)a1;
- (void)configureDaemonMode;
- (id)clientXPCInterfaceFromInbound:(id)a0;
- (void)configureConnectionType:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0;
- (void)startForApp;
- (void)start;
- (void)_releaseAppConnectionWithPid:(int)a0;
- (void)_storeAppConnection:(id)a0;
- (void)_initializeDiagnosticextensionsdConnection;
- (void).cxx_destruct;

@end
