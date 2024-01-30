@class NSString, HDProfile, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject {
    HDProfile *_profile;
    NSString *_sourceBundleIdentifier;
    _HKEntitlements *_entitlements;
    BOOL _clientHasPrivateEntitlement;
}

- (id)filteredObjectsForReadAuthorization:(id)a0 anchor:(id)a1 error:(id *)a2;
- (id)additionalAuthorizationPredicateForObjectType:(id)a0 error:(id *)a1;
- (id)readAuthorizationStatusForType:(id)a0 error:(id *)a1;
- (BOOL)isAuthorizedToReadObject:(id)a0 error:(id *)a1;
- (id)readAuthorizationStatusesForTypes:(id)a0 error:(id *)a1;
- (BOOL)performReadAuthorizationTransactionWithError:(id *)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceBundleIdentifier:(id)a0 entitlements:(id)a1 profile:(id)a2;

@end
