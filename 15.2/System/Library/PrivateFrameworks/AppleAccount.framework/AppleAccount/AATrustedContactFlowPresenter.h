@class NSXPCListener, SBSRemoteAlertHandle, NSString;

@interface AATrustedContactFlowPresenter : NSObject <SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, TrustedContactFlowPresenterProtocol, AATrustedContactPresenterHostProtocol>

@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (copy, nonatomic) id /* block */ presentationCompletion;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)presentInvitationUIWithCustodianshipInfo:(id)a0 completion:(id /* block */)a1;
- (void)_callCompletionBlockWithError:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)trustedContactRequestFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (void)presentModel:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
