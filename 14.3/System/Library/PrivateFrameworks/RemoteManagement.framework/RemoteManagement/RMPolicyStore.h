@interface RMPolicyStore : NSObject {
    id _policyChangeLock;
}

- (id)init;
- (void).cxx_destruct;
- (id)currentPolicyByKey;
- (void)_setCurrentPolicyByKey:(id)a0;
- (void)addOrUpdatePolicy:(id)a0;
- (void)removePolicyWithKey:(id)a0;
- (id)policyWithKey:(id)a0;

@end
