@class NSSet, SBStartupTransitionContextPersistence, SBStartupTransitionFactory, NSString, SBInitialRestartState, BSTransaction, BSTransactionBlockObserver;
@protocol SBStartupTransition;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding, BSTransactionObserver> {
    SBInitialRestartState *_initialRestartState;
    BSTransactionBlockObserver *_transitionObserver;
    BOOL _ranOnce;
    NSSet *_renderOverlayDismissActions;
}

@property (retain, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory;
@property (retain, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence;
@property (readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transactionDidComplete:(id)a0;
- (void)initializeAndRunStartupTransition:(id /* block */)a0;
- (void)transactionDidBegin:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithInitialRestartState:(id)a0;
- (void)_saveContextFromTransitionContext:(id)a0;
- (id)succinctDescriptionBuilder;

@end
