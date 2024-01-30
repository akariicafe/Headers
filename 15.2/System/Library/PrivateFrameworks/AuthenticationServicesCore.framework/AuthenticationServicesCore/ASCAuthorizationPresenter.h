@class NSXPCListener, NSString, SBSRemoteAlertHandle, NSXPCConnection, NSArray, NSObject;
@protocol OS_dispatch_queue, ASCAuthorizationPresenterDelegate, ASCViewServiceProtocol;

@interface ASCAuthorizationPresenter : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, ASCAuthorizationPresenterHostProtocol> {
    NSXPCListener *_remoteListener;
    id /* block */ _credentialResultHandler;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    NSXPCConnection *_viewServiceConnection;
    id<ASCViewServiceProtocol> _viewServiceProxy;
    NSObject<OS_dispatch_queue> *_interfaceUpdateQueue;
    NSArray *_loginChoicesForQueuedUpdate;
    BOOL _hasQueuedPINEntryInterfaceRequest;
}

@property (weak, nonatomic) id<ASCAuthorizationPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateWithError:(id)a0;
- (void)dismiss;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)presentAuthorizationWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateInterfaceForUserVisibleError:(id)a0;
- (void)dismissWithError:(id)a0;
- (void)presentError:(id)a0 forService:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentPINEntryInterface;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizationRequestFinishedWithCredential:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)validateUserEnteredPIN:(id)a0 completionHandler:(id /* block */)a1;
- (void)initializeClientToViewServiceConnection;
- (BOOL)_isPresentationContextValid:(id)a0 error:(id *)a1;
- (void)_performQueuedUpdatesIfNecessary;
- (BOOL)_isErrorDueToNewAlertHandleRequest:(id)a0;

@end
