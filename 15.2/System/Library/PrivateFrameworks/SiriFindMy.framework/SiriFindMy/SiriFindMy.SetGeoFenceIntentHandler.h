@interface SiriFindMy.SetGeoFenceIntentHandler : NSObject <SetGeoFenceIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ sessionManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveFriendForSetGeoFence:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLocationForSetGeoFence:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmSetGeoFence:(id)a0 completion:(id /* block */)a1;
- (void)handleSetGeoFence:(id)a0 completion:(id /* block */)a1;

@end
