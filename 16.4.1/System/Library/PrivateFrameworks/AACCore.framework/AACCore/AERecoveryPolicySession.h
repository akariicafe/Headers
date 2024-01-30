@class NSArray, NSObject;
@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

@interface AERecoveryPolicySession : NSObject <AEPolicySession> {
    NSArray *_persistentDeactivations;
    id<AEPolicyStore> _policyStore;
    id<AEPerformancePrimitives> _performancePrimitives;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)a0;

@end
