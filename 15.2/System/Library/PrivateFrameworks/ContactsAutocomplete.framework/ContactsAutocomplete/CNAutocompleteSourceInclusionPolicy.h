@interface CNAutocompleteSourceInclusionPolicy : NSObject

+ (id)policyWithPolicies:(id)a0;
+ (id)defaultPolicyWithFetchRequest:(id)a0;
+ (id)policyForNoContactsAccess;
+ (id)policyWithFetchRequest:(id)a0;
+ (id)policyWithUserDefaults:(id)a0;
+ (id)policyWithCurrentProcessEntitlements;
+ (id)policyWithValue:(BOOL)a0;

@end
