@class BSAtomicSignal, BSAction;

@interface FBSceneClientProviderInvalidationAction : NSObject {
    BSAtomicSignal *_invalidated;
    BSAction *_action;
}

- (id)initWithHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
