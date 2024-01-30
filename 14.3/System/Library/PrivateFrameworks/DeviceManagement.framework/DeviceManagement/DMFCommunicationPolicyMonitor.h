@class NSSet, NSDictionary, DMFApplicationPolicyMonitor, NSArray, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *communicationBundleIdentifiers;

@property (copy, nonatomic) NSDictionary *policiesByBundleIdentifier;
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (nonatomic) BOOL didFetchInitialPolicies;
@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (unsigned long long)communicationPolicyForApplicationPolicy:(id)a0 downtimeEnforced:(BOOL)a1;
+ (id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)a0;
+ (id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)a0;
+ (id)new;
+ (id)_categoryForCommunicationBundleIdentifier:(id)a0;
+ (id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)a0 categoryEffectivePolicy:(id)a1;

- (id)init;
- (void)_updateWithPoliciesByBundleIdentifier:(id)a0 categoryEffectivePolicy:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updatePoliciesByBundleIdentifier;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:(id /* block */)a0;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (id)requestPoliciesByBundleIdentifierWithError:(id *)a0;

@end
