@class NSString, NSMutableDictionary, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SBSRemoteAlertHandleXPCClient : NSObject <SBSRemoteAlertHandleServiceClientInterface, SBSRemoteAlertHandleClient> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    BSServiceConnection *_connection;
    BOOL _connectionActivated;
    BOOL _connectionInvalidated;
    NSMutableDictionary *_handleIDToHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleError:(id)a0;
- (id)init;
- (id)_connection;
- (void).cxx_destruct;
- (void)_invalidateHandleForHandleID:(id)a0 withError:(id)a1;
- (void)activateRemoteAlertHandle:(id)a0 withContext:(id)a1;
- (id)createRemoteAlertHandleWithDefinition:(id)a0 configurationContext:(id)a1;
- (void)invalidateRemoteAlertHandle:(id)a0;
- (oneway void)remoteAlertHandleWithID:(id)a0 didInvalidateWithError:(id)a1;
- (oneway void)remoteAlertHandleWithIDDidActivate:(id)a0;
- (oneway void)remoteAlertHandleWithIDDidDeactivate:(id)a0;
- (id)remoteAlertHandlesForDefinition:(id)a0 allowsCreation:(BOOL)a1 configurationContext:(id)a2;

@end
