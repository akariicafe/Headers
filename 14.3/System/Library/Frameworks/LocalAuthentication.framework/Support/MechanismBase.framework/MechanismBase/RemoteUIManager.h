@class NSString, SBSRemoteAlertHandle, MechanismBase;
@protocol LARemoteUIHost, LAUIMechanism;

@interface RemoteUIManager : NSObject <SBSRemoteAlertHandleObserver, LARemoteUIHost> {
    MechanismBase<LAUIMechanism, LARemoteUIHost> *_uiMechanism;
    id /* block */ _pendingShowUiReply;
    id /* block */ _pendingUiActivationBlock;
    id _pendingUiMechanism;
    id _dismissingUi;
    BOOL _uiDismissedBeforeConnection;
    int _showUiCounter;
    int _dismissUiCounter;
}

@property (weak, nonatomic) SBSRemoteAlertHandle *activatingHandle;
@property (weak, nonatomic) SBSRemoteAlertHandle *activeHandle;
@property (nonatomic) BOOL remoteAlertWasInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)connectRemoteUI:(id)a0 reply:(id /* block */)a1;
- (void)disconnectRemoteUI;
- (void)_assignPendingMechanism:(id)a0 reply:(id /* block */)a1;
- (BOOL)_activatePlatformUIWithParams:(id)a0;
- (void)_setupUiActivationTimeout;
- (void)_activateUi;
- (void)_replyOnceToShowUi:(BOOL)a0 error:(id)a1;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;
- (void)prepareForRemoteViewControllerWithMechanism:(id)a0 reply:(id /* block */)a1;
- (void)connectionToViewServiceInvalidated;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 reply:(id /* block */)a3;

@end
