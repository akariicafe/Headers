@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient {
    id<FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (long long)activeInterfaceOrientation;
- (void)configureConnectMessage:(id)a0;
- (id)initWithDelegate:(id)a0 calloutQueue:(id)a1;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;
- (void)_getActiveInterfaceOrientationSynchronously:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (void)registerOrientationInterest:(unsigned int)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
