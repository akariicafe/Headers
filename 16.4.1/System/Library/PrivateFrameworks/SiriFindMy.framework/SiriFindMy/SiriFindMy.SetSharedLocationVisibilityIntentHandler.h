@interface SiriFindMy.SetSharedLocationVisibilityIntentHandler : NSObject <SetSharedLocationVisibilityIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ sessionManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetSharedLocationVisibility:(id)a0 completion:(id /* block */)a1;
- (void)handleSetSharedLocationVisibility:(id)a0 completion:(id /* block */)a1;

@end
