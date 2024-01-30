@class FBSSceneParameters, FBSSceneTransitionContext, NSString, FBSSceneDefinition, FBApplicationUpdateScenesTransaction;
@protocol BSInvalidatable;

@interface FBSceneCreator : NSObject <FBApplicationUpdateScenesTransactionObserver> {
    FBSSceneDefinition *_definition;
    id /* block */ _configurator;
    FBApplicationUpdateScenesTransaction *_transaction;
    id<BSInvalidatable> _captureToken;
    BOOL _executed;
    BOOL _invalidated;
}

@property (copy, nonatomic) FBSSceneParameters *parameters;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interrupt;
- (void).cxx_destruct;
- (void)transaction:(id)a0 didCreateScene:(id)a1;
- (void)invalidate;
- (id)initWithDefinition:(id)a0 configuration:(id /* block */)a1;
- (void)executeWithCompletion:(id /* block */)a0;

@end
