@class NSString, NSMutableDictionary, NSObject, SBRemoteTransientOverlaySessionManager;
@protocol OS_dispatch_queue;

@interface SBRemoteAlertHandleLocalClient : NSObject <SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleClient> {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    SBRemoteTransientOverlaySessionManager *_sessionManager;
    NSMutableDictionary *_sessionIDToRemoteAlertHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionManager:(id)a0;
- (void)remoteTransientOverlaySession:(id)a0 didInvalidateWithReason:(long long)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)activateRemoteAlertHandle:(id)a0 withContext:(id)a1;
- (id)createRemoteAlertHandleWithDefinition:(id)a0 configurationContext:(id)a1;
- (void)invalidateRemoteAlertHandle:(id)a0;
- (id)remoteAlertHandlesForDefinition:(id)a0 allowsCreation:(BOOL)a1 configurationContext:(id)a2;
- (void)_registerHandle:(id)a0 forSession:(id)a1;
- (void)_unregisterHandle:(id)a0;
- (void)remoteTransientOverlaySessionDidActivate:(id)a0;
- (void)remoteTransientOverlaySessionDidDeactivate:(id)a0;

@end
