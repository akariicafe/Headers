@class _CDInMemoryUserContext, NSMutableDictionary, _CDUserContextService, NSXPCConnection, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface _CDUserContextServerClient : NSObject <_CDUserContextServer>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activateMonitorQueue;
@property (retain, nonatomic) _CDUserContextService *service;
@property (retain, nonatomic) _CDInMemoryUserContext *userContext;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (retain, nonatomic) NSMutableSet *wakingRegistrations;
@property (retain, nonatomic) NSMutableSet *nonWakingRegistration;
@property (retain, nonatomic) NSMutableDictionary *devicesToActivateByRemoteUserContextProxySourceDeviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientOfService:(id)a0 withConnection:(id)a1 andContext:(id)a2;
+ (id)clientInterface;
+ (id)serverInterface;

- (void)_hasKnowledgeOfPath:(id)a0 handler:(id /* block */)a1;
- (void)valuesForPaths:(id)a0 inContextsMatching:(id)a1 handler:(id /* block */)a2;
- (void)hasKnowledgeOfPath:(id)a0 handler:(id /* block */)a1;
- (void)deregisterCallback:(id)a0;
- (BOOL)isMDCSNeededForKeyPath:(id)a0;
- (void).cxx_destruct;
- (void)registerCallback:(id)a0;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1 handler:(id /* block */)a2;
- (void)performRegistrationCallbackWithRegistration:(id)a0 info:(id)a1;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)a0;
- (id)remoteDevices;
- (void)dealloc;
- (void)propertiesOfPath:(id)a0 handler:(id /* block */)a1;
- (void)deactivateDevices:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1;
- (void)_propertiesOfPath:(id)a0 handler:(id /* block */)a1;
- (void)_propertiesOfRemotePath:(id)a0 handler:(id /* block */)a1;
- (void)addObjects:(id)a0 andRemoveObjects:(id)a1 forArrayAtPath:(id)a2 handler:(id /* block */)a3;
- (void)removeObjects:(id)a0 fromArrayAtPath:(id)a1 handler:(id /* block */)a2;
- (id)remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)a0;
- (id)deviceIDsForDeviceTypes:(unsigned long long)a0;
- (id)keyPathsSortedByDeviceID:(id)a0;
- (void)handlePreviouslyFiredRegistration:(id)a0 info:(id)a1;
- (void)deregisterAllCallbacks:(BOOL)a0;
- (void)setObject:(id)a0 lastModifiedDate:(id)a1 forContextualKeyPath:(id)a2 handler:(id /* block */)a3;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)a0 handler:(id /* block */)a1;
- (void)_valuesForPaths:(id)a0 handler:(id /* block */)a1;
- (void)proxyTokenDidUpdate;
- (id)remoteUserContextProxySourceDeviceUUIDForKeyPath:(id)a0;
- (id)deviceIDsSortedByRemoteUserContextProxySourceDeviceUUIDFromDeviceIDs:(id)a0;
- (void)removeObjectsMatchingPredicate:(id)a0 fromArrayAtPath:(id)a1 handler:(id /* block */)a2;
- (BOOL)isMDCSNeededForKeyPathInKeyPaths:(id)a0;
- (void)addObjects:(id)a0 toArrayAtPath:(id)a1 handler:(id /* block */)a2;
- (id)remoteDeviceIDs;
- (void)propertiesOfRemotePath:(id)a0 handler:(id /* block */)a1;
- (void)evaluatePredicate:(id)a0 handler:(id /* block */)a1;
- (void)valuesForPaths:(id)a0 handler:(id /* block */)a1;
- (void)unsubscribeFromContextValueNotificationsWithRegistration:(id)a0 deviceIDs:(id)a1;
- (id)remoteUserContextProxySourceDeviceUUIDByDeviceID;
- (void)_valueForRemotePath:(id)a0 handler:(id /* block */)a1;
- (void)subscribeToContextValueNotificationsWithRegistration:(id)a0 deviceIDs:(id)a1;
- (id)remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)a0;
- (void)activateDevices:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1;
- (id)initForService:(id)a0 withConnection:(id)a1 andContext:(id)a2;
- (void)_valueForPath:(id)a0 handler:(id /* block */)a1;
- (void)setObject:(id)a0 forPath:(id)a1 handler:(id /* block */)a2;

@end
