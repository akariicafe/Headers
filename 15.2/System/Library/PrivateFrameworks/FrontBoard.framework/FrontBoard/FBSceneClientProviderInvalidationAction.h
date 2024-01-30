@class BSAtomicSignal, BSAction;

@interface FBSceneClientProviderInvalidationAction : NSObject {
    BSAtomicSignal *_invalidated;
    BSAction *_action;
}

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)invalidate;

@end
