@class NSArray;
@protocol AEPolicyStore, AEPerformancePrimitives;

@interface AEActivationPool : NSObject {
    NSArray *_activations;
    id /* block */ _invalidationHandler;
    id<AEPolicyStore> _policyStore;
    id<AEPerformancePrimitives> _performancePrimitives;
}

- (void).cxx_destruct;

@end
