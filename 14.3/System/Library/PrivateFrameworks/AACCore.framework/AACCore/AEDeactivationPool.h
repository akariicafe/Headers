@class NSArray;
@protocol AEPolicyStore, AEPerformancePrimitives;

@interface AEDeactivationPool : NSObject {
    NSArray *_persistentDeactivations;
    id<AEPolicyStore> _policyStore;
    id<AEPerformancePrimitives> _performancePrimitives;
}

- (void).cxx_destruct;

@end
