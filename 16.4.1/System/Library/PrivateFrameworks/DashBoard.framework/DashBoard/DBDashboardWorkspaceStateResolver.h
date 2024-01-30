@protocol DBAppPolicyProviding;

@interface DBDashboardWorkspaceStateResolver : NSObject

@property (weak, nonatomic) id<DBAppPolicyProviding> policyProvider;

- (void).cxx_destruct;
- (id)computeNewStateFromState:(id)a0 andRequest:(id)a1;
- (id)initWithPolicyProvider:(id)a0;

@end
