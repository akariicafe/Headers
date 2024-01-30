@class NSMutableArray, NSString, URTAlertServiceDelegateProxy, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, URTAlertServiceDelegate, BSInvalidatable;

@interface URTAlertService : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable>

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) id<BSInvalidatable> domainActivationToken;
@property (readonly, nonatomic) NSMutableArray *connections;
@property (readonly, nonatomic) URTAlertServiceDelegateProxy *delegateProxy;
@property (weak, nonatomic) id<URTAlertServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)a0;
- (void)_connectionQueue_removeConnection:(id)a0;
- (id)_connectionQueue_alertConnectionForConnection:(id)a0;
- (void)_connectionQueue_dismissAlert:(id)a0 forConnection:(id)a1;
- (void)_connectionQueue_presentAlert:(id)a0 forConnection:(id)a1;
- (void)_performClientActionForAlert:(id)a0 clientAction:(id /* block */)a1;

@end
