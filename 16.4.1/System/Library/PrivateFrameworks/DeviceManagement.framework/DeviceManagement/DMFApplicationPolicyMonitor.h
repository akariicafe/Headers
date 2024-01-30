@class DMFPolicyRegistration, NSArray, NSUUID, NSMutableDictionary;

@interface DMFApplicationPolicyMonitor : NSObject {
    NSMutableDictionary *_lastRequestDateByBundleIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) DMFPolicyRegistration *registration;

+ (void)_fetchCategoriesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_fetchCategoriesForBundleIdentifiers:(id)a0 withError:(id *)a1;
+ (void)createPolicyMonitorWithPolicyChangeHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (id)fetchParentBundleIdentifiersForBundleIdentifiers:(id)a0;

- (id)_initWithPolicyChangeHandler:(id /* block */)a0 addingRegistration:(BOOL)a1;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (id)requestPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
