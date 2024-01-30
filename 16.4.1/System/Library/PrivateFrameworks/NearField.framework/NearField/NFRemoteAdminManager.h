@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {
    NSXPCConnection *_connection;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRemoteAdminManager;

- (void)_connectIfNeeded;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)remoteAdminCleanupProgress:(double)a0;
- (id)registrationInfo;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)primaryRegionTopic;
- (void)unregisterEventListener:(id)a0;
- (void)registerEventListener:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appletStateChange:(id)a0;
- (BOOL)cancelCardIngestion;
- (void)connectToServer:(id)a0 callback:(id /* block */)a1;
- (void)getSELDInfoForBroker:(id /* block */)a0;
- (void)ingestCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)queueServerConnection:(id)a0;
- (BOOL)queueServerConnectionForApplets:(id)a0;
- (void)readerModeCardIngestionStatus:(unsigned long long)a0;
- (void)readerModeCardSessionToken:(id)a0;
- (BOOL)setRegistrationInfo:(id)a0 primaryRegionTopic:(id)a1;
- (id)deleteAllAppletsAndCleanupWithTSM;
- (void)didInterruptXPCConnection:(id)a0;
- (void)didInvalidateXPCConnection:(id)a0;
- (id)getAPNPublicToken;
- (id)nextRequestForServer:(id)a0;

@end
