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

- (void)performBlockWithXPCConnection:(id /* block */)a0;
- (void)registerConnectionStateObserver:(id)a0;
- (void)unregisterClient:(id)a0 withIdentifier:(id)a1;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (id)_clientWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterConnectionStateObserver:(id)a0;
- (void)_broadcastConnectedStateChange;

@end
