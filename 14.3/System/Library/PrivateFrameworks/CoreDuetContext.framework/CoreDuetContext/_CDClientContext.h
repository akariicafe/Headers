@class NSXPCListenerEndpoint, NSMutableDictionary, NSXPCConnection, NSCountedSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_log, _CDRemoteUserContextServer;

@interface _CDClientContext : NSObject <_CDAsyncUserContext, _CDAsyncLocalContext, _CDUserContextServerMonitoring>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcEventQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) BOOL interrupted;
@property (retain, nonatomic) NSMutableDictionary *keyPathToValues;
@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSCountedSet *keyPathsWithRegistrationsForAnyChange;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (retain, nonatomic) NSMutableDictionary *openRegistrationTokens;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDRemoteUserContextServer> remoteUserContextProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userContext;
+ (id)clientInterface;
+ (id)userContextWithEndpoint:(id)a0;
+ (id)serverInterface;

- (id)currentConnection;
- (BOOL)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2;
- (id)valuesForKeyPaths:(id)a0;
- (id)lastModifiedDateForContextualKeyPath:(id)a0;
- (void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)a0;
- (id)lastModifiedDateForContextualKeyPath:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)deregisterCallback:(id)a0;
- (void).cxx_destruct;
- (void)handleFetchProxySourceDeviceUUIDEvent:(id)a0;
- (void)registerCallback:(id)a0;
- (void)handleNotificationEvent:(id)a0;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1 synchronous:(BOOL)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (id)localContext;
- (BOOL)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1;
- (void)dealloc;
- (void)deactivateDevices:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1;
- (BOOL)addObjects:(id)a0 toArrayAtKeyPath:(id)a1;
- (void)valuesForKeyPaths:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithEndpoint:(id)a0;
- (void)setCachedValueIfClientHasRegistrations:(id)a0 forKeyPath:(id)a1;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (void)retryTimes:(int)a0 block:(id /* block */)a1;
- (void)cleanupInternalReferencesToRegistration:(id)a0;
- (void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)a0;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)a0;
- (BOOL)setObject:(id)a0 forContextualKeyPath:(id)a1;
- (BOOL)evaluatePredicate:(id)a0;
- (void)addObjects:(id)a0 toArrayAtKeyPath:(id)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)addObjects:(id)a0 toArrayAtKeyPath:(id)a1 synchronous:(BOOL)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (void)unprotectedSetUpXPCConnectionWithEndpoint:(id)a0;
- (void)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (BOOL)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 synchronous:(BOOL)a3 responseQueue:(id)a4 withCompletion:(id /* block */)a5;
- (id)objectForContextualKeyPath:(id)a0;
- (id)defaultCallbackQueue;
- (void)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)handleMDCSEvent:(id)a0;
- (void)objectForContextualKeyPath:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)handleUnsubscribeFromContextValueNotificationsEvent:(id)a0;
- (id)objectForContextualKeyPath:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)handleKeepAliveEvent:(id)a0;
- (void)setObject:(id)a0 forContextualKeyPath:(id)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (id)objectForKeyedSubscript:(id)a0;
- (void)handleFetchPropertiesEvent:(id)a0;
- (id)cachedValueIfClientHasRegistrationsForKeyPath:(id)a0;
- (void)handleContextualChange:(id)a0 info:(id)a1 handler:(id /* block */)a2;
- (void)subscribeToEventStreams;
- (id)valuesForKeyPaths:(id)a0 inContextsMatchingPredicate:(id)a1;
- (BOOL)setObject:(id)a0 forContextualKeyPath:(id)a1 synchronous:(BOOL)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)a0;
- (BOOL)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1 synchronous:(BOOL)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (id)valuesForKeyPaths:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)handleRegistrationCompleted:(id)a0 handler:(id /* block */)a1;
- (void)handleSubscribeToContextValueNotificationsEvent:(id)a0;
- (BOOL)setObject:(id)a0 lastModifiedDate:(id)a1 forContextualKeyPath:(id)a2;
- (void)lastModifiedDateForContextualKeyPath:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)activateDevices:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1;
- (void)handleRequestActivateDevicesEvent:(id)a0;

@end
