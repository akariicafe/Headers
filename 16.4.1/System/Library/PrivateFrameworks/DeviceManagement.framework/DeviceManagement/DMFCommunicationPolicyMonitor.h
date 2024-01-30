@class NSSet, NSDictionary, DMFApplicationPolicyMonitor, NSArray, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *communicationBundleIdentifiers;

@property (copy, nonatomic) NSDictionary *policiesByBundleIdentifier;
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (nonatomic) BOOL didFetchInitialPolicies;
@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)a0 categoryEffectivePolicy:(id)a1;
+ (unsigned long long)communicationPolicyForApplicationPolicy:(id)a0 downtimeEnforced:(BOOL)a1;
+ (id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)a0;
+ (id)_categoryForCommunicationBundleIdentifier:(id)a0;
+ (id)new;
+ (id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)a0;

- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_updateWithPoliciesByBundleIdentifier:(id)a0 categoryEffectivePolicy:(id)a1;
- (void)_updatePoliciesByBundleIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)requestPoliciesByBundleIdentifierWithError:(id *)a0;

@end
