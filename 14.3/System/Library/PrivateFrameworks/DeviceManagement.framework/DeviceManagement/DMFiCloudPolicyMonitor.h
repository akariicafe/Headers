@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long iCloudLogoutPolicy;

+ (id)iCloudLogoutPolicyForPoliciesByType:(id)a0;
+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)requestiCloudLogoutPolicyWithError:(id *)a0;
- (void)requestiCloudLogoutPolicyWithCompletionHandler:(id /* block */)a0;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;

@end
