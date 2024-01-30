@class NSArray, NSUUID;

@interface DMFWebsitePolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;

- (void)requestPoliciesForWebsites:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchCategoriesIfNeededForWebsiteURLs:(id)a0 response:(id /* block */)a1;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
