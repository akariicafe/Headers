@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient {
    id<FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (void).cxx_destruct;
- (void)configureConnectMessage:(id)a0;
- (void)invalidate;
- (void)registerOrientationInterest:(unsigned int)a0;
- (void)_getActiveInterfaceOrientationSynchronously:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 calloutQueue:(id)a1;

@end
