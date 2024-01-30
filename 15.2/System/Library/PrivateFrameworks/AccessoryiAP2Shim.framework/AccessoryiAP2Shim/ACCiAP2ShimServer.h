@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACCiAP2ShimServer : NSObject

@property (retain, nonatomic) NSMutableDictionary *delegateList;
@property (retain, nonatomic) NSMutableDictionary *accessoryViaKeyUIDList;
@property (retain, nonatomic) NSMutableDictionary *accessoryViaConnectionIDList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *listener;
@property (readonly, nonatomic) BOOL isShuttingDown;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *iap2dhighPriorityRootQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalListenerQueue;
@property (readonly) struct __serverFlags { unsigned char deathBecomesUs : 1; unsigned char serverExiting : 1; unsigned int reserved : 30; } serverFlags;
@property (readonly) NSMutableDictionary *clients;
@property (readonly) NSLock *clientLock;
@property (readonly) int iap2AvailableNotifyToken;

+ (id)sharedInstance;
+ (void)postiAP2AppNotificationType:(id)a0 notifyDict:(id)a1;
+ (void)postNSDistributeNotificationType:(id)a0 notifyDict:(id)a1;
+ (void)postNotifydNotificationType:(id)a0;
+ (void)postiAP2NotificationType:(id)a0 notifyDict:(id)a1;
+ (void)resetServerState;
+ (id)stringForClientID:(unsigned int)a0;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)removeAllClients;
- (void)addAccessory:(id)a0;
- (void)removeAccessory:(id)a0;
- (void)_stopServer;
- (void)removeClientForXPCConnection:(id)a0;
- (id)findAccessoryForConnectionID:(unsigned int)a0;
- (id)findAccessoryForAccessoryUID:(id)a0 andKeyTag:(id)a1;
- (void)_startServer;
- (void)notifyEAClientsOfAccessoryReconnection:(id)a0;
- (void)_addAccessory:(id)a0;
- (void)_attachAccessory:(id)a0;
- (void)removeClientWithID:(unsigned int)a0;
- (void)_takeClientAssertionsForAccessoryDisconnection;
- (void)notifyEAClientsOfAccessoryDisconnection:(id)a0;
- (void)notifyEAClient:(id)a0 ofAccessoryEvent:(const char *)a1 accessory:(id)a2;
- (void)_removeAccessory:(id)a0;
- (void)_removeDelegate:(id)a0;
- (void)startServer;
- (void)_resetServerState;
- (void)iterateDelegatesSync:(id /* block */)a0;
- (void).cxx_destruct;
- (void)notifyEAClientsOfAccessoryConnection:(id)a0;
- (id)init;
- (void)_addDelegate:(id)a0;
- (id)findAccessoryForConnectionID:(unsigned int)a0 andKeyTag:(id)a1;
- (void)_iterateAccessories:(id /* block */)a0;
- (void)_pollForDeathAfterPromptCompletes;
- (id)_findAccessoryForConnectionID:(unsigned int)a0;
- (id)_findAccessoryForAccessoryUID:(id)a0 andKeyTag:(id)a1;
- (void)iterateAccessoriesSync:(id /* block */)a0;
- (void)_iterateDelegates:(id /* block */)a0;
- (unsigned int)addClientWithCapabilities:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 currentClientID:(unsigned int)a2 xpcConnection:(id)a3 eaProtocols:(id)a4 notifyOfAlreadyConnectedAccessories:(BOOL)a5 andBundleId:(id)a6;
- (void)notifyEAClientsOfAccessoryEvent:(const char *)a0 accessory:(id)a1;
- (id)_findAccessoryForConnectionID:(unsigned int)a0 andKeyTag:(id)a1;
- (id)findClientWithXPCConnection:(id)a0;
- (void)_detachAccessory:(id)a0;
- (void)iterateDelegatesAsync:(id /* block */)a0;
- (unsigned int)generateClientID;
- (void)dealloc;
- (void)stopServer;
- (id)findClientWithID:(unsigned int)a0;
- (void)_takeClientAssertionsForAccessoryConnection;
- (void)iterateAccessoriesAsync:(id /* block */)a0;
- (BOOL)processXPCMessage:(id)a0 connection:(id)a1;
- (void)processDetachXPCConnection:(id)a0;

@end
