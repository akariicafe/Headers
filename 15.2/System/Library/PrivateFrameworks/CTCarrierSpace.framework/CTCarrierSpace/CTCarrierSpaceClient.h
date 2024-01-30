@class NSXPCListenerEndpoint, CTCarrierSpaceClientDelegateProxy, NSXPCConnection;
@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClient : NSObject {
    NSXPCConnection *_connection;
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _queue;
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _callbackQueue;
    NSXPCListenerEndpoint *_endpoint;
    CTCarrierSpaceClientDelegateProxy *_delegateProxy;
}

@property (weak, nonatomic) id<CTCarrierSpaceClientDelegate> delegate;

- (void)_ensureConnected_sync;
- (void)_connect_sync;
- (id)_proxyWithErrorHandler:(id /* block */)a0;
- (void)ping:(id /* block */)a0;
- (id)initWithQueue:(struct dispatch_queue_s { } *)a0;
- (void)purchasePlan:(id)a0 completion:(id /* block */)a1;
- (void)fetchUsageInfo:(id /* block */)a0;
- (void)refreshAppsInfo:(id /* block */)a0;
- (void)fetchPlansInfo:(id /* block */)a0;
- (void)userDidAcceptPlanTerms:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchUsageInfo:(BOOL)a0 completion:(id /* block */)a1;
- (void)authenticationDidFail:(id)a0 completion:(id /* block */)a1;
- (void)authenticationDidComplete:(id)a0 completion:(id /* block */)a1;
- (void)fetchPlansInfo:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchDataPlanMetrics:(id /* block */)a0;
- (void)refreshPlansInfo:(id /* block */)a0;
- (void)testMode:(BOOL)a0 config:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)refreshUsageInfo:(id /* block */)a0;
- (void)fetchAppsInfo:(BOOL)a0 completion:(id /* block */)a1;
- (void)getCapabilities:(id /* block */)a0;
- (void)getUserConsentFlowInfo:(id /* block */)a0;
- (void)invalidate;
- (void)fetchAppsInfo:(id /* block */)a0;
- (void)getAuthenticationContext:(id /* block */)a0;
- (id)initWithQueue:(struct dispatch_queue_s { } *)a0 andListenerEndpoint:(id)a1;
- (void)setUserInAuthFlow:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)setUserConsent:(BOOL)a0 completion:(id /* block */)a1;
- (void)refreshAllInfo:(id /* block */)a0;
- (id).cxx_construct;
- (void)purchasePlan:(id)a0 authInfo:(id)a1 completion:(id /* block */)a2;

@end
