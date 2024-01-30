@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject

@property (nonatomic) BOOL updatingPolicy;
@property (weak, nonatomic) id<ASPolicyManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)policyKeyChanged:(id)a0;
- (void)policyFailedToUpdate;
- (id)currentPolicyKey;
- (void)requestPolicyUpdate;

@end
