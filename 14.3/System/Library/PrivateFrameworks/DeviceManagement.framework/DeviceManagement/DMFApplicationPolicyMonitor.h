@class NSArray, NSUUID, DMFPolicyRegistration;

@interface DMFApplicationPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) DMFPolicyRegistration *registration;

+ (id)_fetchCategoriesForBundleIdentifiers:(id)a0 withError:(id *)a1;
+ (void)_fetchCategoriesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
+ (void)createPolicyMonitorWithPolicyChangeHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)_initWithPolicyChangeHandler:(id /* block */)a0 addingRegistration:(BOOL)a1;
- (void)dealloc;
- (id)requestPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)requestPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
