@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CASServiceProxy : NSObject <CASServiceClientInterface, CASServiceServerInterface> {
    NSXPCConnection *_connection;
    _Atomic BOOL _activateCalledAtomic;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ deviceAcceptedNotificationHandler;
@property (copy, nonatomic) id /* block */ deviceStartedAuthenticationHandler;
@property (copy, nonatomic) id /* block */ sessionFinishedHandler;
@property (copy, nonatomic) id /* block */ sessionFailedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)_activated;
- (void)startAuthenticationSessionWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDaemonStatusWithCompletionHandler:(id /* block */)a0;
- (void)authenticationSessionDeviceAcceptedNotification:(id)a0;
- (void)authenticationSessionDeviceStartedAuthentication:(id)a0;
- (void)authenticationSessionDidFinishWithResponse:(id)a0;
- (void)authenticationSessionDidFailWithError:(id)a0;
- (void)_noteConnectionInterrupted;
- (void)_startAuthenticationSessionWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchDaemonStatusWithCompletionHandler:(id /* block */)a0;

@end
