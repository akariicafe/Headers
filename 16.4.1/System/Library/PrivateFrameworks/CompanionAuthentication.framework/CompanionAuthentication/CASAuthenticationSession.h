@class CASAuthenticationRequest, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CASAuthenticationSession : NSObject <CASAuthenticationServiceClientInterface> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_serviceConnection;
    BOOL _activateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) id /* block */ deviceAcceptedNotificationHandler;
@property (copy, nonatomic) id /* block */ deviceStartedAuthenticationHandler;
@property (readonly, nonatomic) CASAuthenticationRequest *request;
@property (copy, nonatomic) id /* block */ sessionCompletionHandler;
@property (copy, nonatomic) id /* block */ sessionFinishedHandler;
@property (copy, nonatomic) id /* block */ sessionFailedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)authenticationSessionDeviceStartedAuthentication:(id)a0;
- (void)authenticationSessionDeviceTappedNotification:(id)a0;
- (void)authenticationSessionDidFailWithError:(id)a0;
- (void)authenticationSessionDidFinishWithResponse:(id)a0;

@end
