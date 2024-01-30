@class NSObject, NSString, FBServiceClientAuthenticator, SBRemoteTransientOverlaySessionManager, NSMapTable, NSMutableArray, BSServiceConnectionListener;
@protocol OS_dispatch_queue;

@interface SBRemoteAlertHandleServer : NSObject <BSServiceConnectionListenerDelegate, SBSRemoteAlertHandleServiceServerInterface, SBRemoteTransientOverlaySessionObserver> {
    NSMutableArray *_activeConnections;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    FBServiceClientAuthenticator *_legacyClientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    SBRemoteTransientOverlaySessionManager *_sessionManager;
    NSMapTable *_sessionToConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithSessionManager:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (oneway void)invalidateRemoteAlertHandleWithID:(id)a0;
- (id)remoteAlertHandleContextsForDefinition:(id)a0 allowsCreationValue:(id)a1 configurationContext:(id)a2;
- (id)createRemoteAlertHandleContextWithDefinition:(id)a0 configurationContext:(id)a1;
- (oneway void)activateRemoteAlertHandleWithID:(id)a0 activationContext:(id)a1;
- (void)dealloc;
- (void)remoteTransientOverlaySession:(id)a0 didInvalidateWithReason:(long long)a1 error:(id)a2;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (void)remoteTransientOverlaySessionDidActivate:(id)a0;
- (void)remoteTransientOverlaySessionDidDeactivate:(id)a0;
- (BOOL)_shouldAllowAuditToken:(id)a0 forDefinition:(id)a1;
- (void)_addConnection:(id)a0 forSession:(id)a1;
- (void)_removeConnection:(id)a0 forSession:(id)a1;

@end
