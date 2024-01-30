@class CNCache, CNContactStore, NSString;

@interface CNContactViewCache : NSObject <CNUICoreParentContainerProvider>

@property (retain, nonatomic) CNCache *cachedContainers;
@property (retain, nonatomic) CNCache *cachedPolicies;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCandidatePolicy:(id)a0 ofContactInCandidateContainerWithType:(long long)a1 preferredOverPolicy:(id)a2 ofContactInContainerWithType:(long long)a3;
+ (BOOL)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)a0;

- (void).cxx_destruct;
- (id)containerForContact:(id)a0;
- (id)policyForContact:(id)a0;
- (id)policyForDefaultContainer;
- (id)accountForContact:(id)a0;
- (id)predicateForContainerForContact:(id)a0 inStore:(id)a1;
- (id)_policyForContact:(id)a0;
- (id)defaultContainerPolicy;
- (id)bestPolicyForContact:(id)a0;
- (id)_accountForContact:(id)a0;
- (id)nts_lazyContactStore;
- (void)resetCache;

@end
