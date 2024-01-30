@class AXAccessQueue, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface AXUIClientConnection : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) AXAccessQueue *connectionAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *registeredClients;
@property (retain, nonatomic) AXAccessQueue *registeredClientsAccessQueue;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) NSHashTable *stateObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateObserverQueue;

+ (id)sharedClientConnection;

- (void)unregisterConnectionStateObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterClient:(id)a0 withIdentifier:(id)a1;
- (void)performBlockWithXPCConnection:(id /* block */)a0;
- (void)_broadcastConnectedStateChange;
- (id)_clientWithIdentifier:(id)a0;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (void)registerConnectionStateObserver:(id)a0;

@end
