@class NSArray, NSObject;
@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

@interface AEActivationPool : NSObject {
    NSArray *_activations;
    id /* block */ _invalidationHandler;
    id<AEPolicyStore> _policyStore;
    id<AEPerformancePrimitives> _performancePrimitives;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;

@end
