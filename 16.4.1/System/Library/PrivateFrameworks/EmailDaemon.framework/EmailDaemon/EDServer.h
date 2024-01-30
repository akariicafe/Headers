@class NSXPCListener, NSXPCListenerEndpoint, NSString, NSArray, EDDaemonInterfaceFactory, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDServer : NSObject <NSXPCListenerDelegate, EDServerRemoteClientsProvider, EFLoggable, EDReconciliationQueryProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) EFLocked *connectedClients;
@property (retain, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *remoteClients;

- (id)initWithDaemonInterfaceFactory:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)messageReconciliationQueries;
- (void)addRemoteClient:(id)a0;
- (void)removeRemoteClient:(id)a0;
- (void)test_tearDown;
- (void)start;
- (id)threadReconciliationQueries;
- (id)initWithDaemonInterfaceFactory:(id)a0 listener:(id)a1;
- (void).cxx_destruct;

@end
