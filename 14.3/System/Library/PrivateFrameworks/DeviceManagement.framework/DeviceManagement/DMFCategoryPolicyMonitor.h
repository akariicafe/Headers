@class NSArray, NSUUID;

@interface DMFCategoryPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)requestPoliciesForCategoryIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
