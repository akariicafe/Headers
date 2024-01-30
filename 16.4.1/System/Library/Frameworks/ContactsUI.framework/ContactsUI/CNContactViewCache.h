@class CNCache, CNContactStore, NSString;

@interface CNContactViewCache : NSObject <CNUICoreParentContainerProvider>

@property (retain, nonatomic) CNCache *cachedContactToContainerIDs;
@property (retain, nonatomic) CNCache *cachedContainers;
@property (retain, nonatomic) CNCache *cachedPolicies;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) CNCache *cachedTopAccounts;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCandidatePolicy:(id)a0 ofContactInCandidateContainerWithType:(long long)a1 preferredOverPolicy:(id)a2 ofContactInContainerWithType:(long long)a3;
+ (BOOL)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)a0;

- (id)policyForDefaultContainer;
- (id)accountForContact:(id)a0;
- (id)predicateForContainerForContact:(id)a0 inStore:(id)a1;
- (id)_uncachedContainerForContact:(id)a0 inStore:(id)a1;
- (id)policyForContact:(id)a0;
- (id)_policyForContact:(id)a0;
- (id)nts_lazyContactStore;
- (id)policyForContainer:(id)a0;
- (id)policyForContainerWithIdentifier:(id)a0;
- (id)bestPolicyForContact:(id)a0;
- (id)containerIdentifierForContact:(id)a0;
- (id)containerForContact:(id)a0;
- (void)resetCache;
- (id)init;
- (id)accountForContainer:(id)a0 shouldUseTopLevelAccount:(BOOL)a1;
- (id)defaultContainerPolicy;
- (void).cxx_destruct;
- (id)_accountForContainer:(id)a0;
- (id)accountForContainer:(id)a0;

@end
