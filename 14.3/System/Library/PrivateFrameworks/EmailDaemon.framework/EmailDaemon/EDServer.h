@class NSXPCListener, NSXPCListenerEndpoint, NSArray, NSString, EDDaemonInterfaceFactory, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDServer : NSObject <NSXPCListenerDelegate, EFLoggable, EDReconciliationQueryProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) EFLocked *connectedClients;
@property (retain, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly, copy, nonatomic) NSArray *test_remoteClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)test_tearDown;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)messageReconciliationQueries;
- (id)threadReconciliationQueries;
- (void)start;
- (id)initWithDaemonInterfaceFactory:(id)a0 listener:(id)a1;
- (void)removeRemoteClient:(id)a0;
- (void)addRemoteClient:(id)a0;
- (id)initWithDaemonInterfaceFactory:(id)a0;

@end
