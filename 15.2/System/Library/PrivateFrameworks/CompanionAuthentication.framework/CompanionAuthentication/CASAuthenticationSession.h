@class CASServiceProxy, CASAuthenticationRequest, NSObject;
@protocol OS_dispatch_queue;

@interface CASAuthenticationSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CASServiceProxy *_service;
    BOOL _invalidateDone;
}

@property (readonly, nonatomic) CASAuthenticationRequest *request;
@property (copy, nonatomic) id /* block */ deviceAcceptedNotificationHandler;
@property (copy, nonatomic) id /* block */ deviceStartedAuthenticationHandler;
@property (copy, nonatomic) id /* block */ sessionFinishedHandler;
@property (copy, nonatomic) id /* block */ sessionFailedHandler;

- (id)initWithRequest:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)_activated;
- (void)cancel;
- (void)_notifyDeviceAcceptedNotification:(id)a0;
- (void)_notifyDeviceStartedAuthentication:(id)a0;
- (void)_sessionFinishedWithResponse:(id)a0;
- (void)_sessionFailedWithError:(id)a0;

@end
