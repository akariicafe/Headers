@class NSArray, AEInvalidationRouter, NSObject;
@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

@interface AEActivePolicySession : NSObject <AEInvalidationRouterDelegate, AEPolicySession> {
    id<AEPolicyStore> _policyStore;
    id<AEPerformancePrimitives> _performancePrimitives;
    AEInvalidationRouter *_invalidationRouter;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_activation;
    NSArray *_persistentDeactivations;
}

@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (id)sessionWithPolicyStore:(id)a0 performancePrimitives:(id)a1 invalidationRouter:(id)a2 activations:(id)a3 persistentDeactivations:(id)a4 queue:(id)a5;

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (void)invalidationRouter:(id)a0 didReceiveInvalidationError:(id)a1;

@end
