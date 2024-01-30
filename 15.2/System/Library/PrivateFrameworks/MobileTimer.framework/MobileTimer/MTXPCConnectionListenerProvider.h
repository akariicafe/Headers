@class NSXPCListener, NSString, NSArray, NSMutableSet, MTXPCConnectionInfo;
@protocol NAScheduler;

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) id<NAScheduler> serializer;
@property (copy, nonatomic) NSString *requiredEntitlement;
@property (retain, nonatomic) MTXPCConnectionInfo *info;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) NSXPCListener *connectionListener;
@property (readonly, nonatomic) NSArray *connectedClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;

- (void)stopListening;
- (void)startListening;
- (void)removeClientConnection:(id)a0;
- (id)currentClient;
- (id)_currentClientForConnection:(id)a0;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection:(id)a0;
- (void)addClientConnection:(id)a0 clientLink:(id)a1;
- (void)performBlockOnAllClients:(id /* block */)a0 excludingCurrent:(BOOL)a1;
- (void)_performBlockOnClientInfos:(id /* block */)a0 excludingClient:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;
- (void)performBlockOnAllClients:(id /* block */)a0;
- (void)performBlockOnCurrentClient:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performBlockOnClientInfos:(id /* block */)a0 excludeCurrent:(BOOL)a1;
- (void)dealloc;
- (void)performBlockOnAllClients:(id /* block */)a0 excludingClient:(id)a1;
- (id)_connectedClients;

@end
