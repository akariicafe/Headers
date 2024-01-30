@class NSArray, NSUUID;

@interface DMFCategoryPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestPoliciesForCategoryIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
