@interface CTCellularData : NSObject {
    struct network_usage_policy_client_s { } *_cuPolicyClient;
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _cuPolicyClientQueue;
}

@property (copy) id /* block */ cellularDataRestrictionDidUpdateNotifier;
@property (readonly, nonatomic) unsigned long long restrictedState;

- (void)setCellularDataRestrictionStateFromPolicies:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
