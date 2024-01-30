@class NSDictionary, _CDInteractionPolicy, NSDate;

@interface _CDInteractionPolicies : NSObject {
    unsigned long long _maxNumberOfInteractions;
    unsigned long long _maxNumberOfInteractionsDeletedInBatch;
    double _maxLifespanInSeconds;
    NSDictionary *_specialPoliciesForBundleIds;
    NSDictionary *_specialPoliciesForMechanisms;
    _CDInteractionPolicy *_defaultPolicy;
}

@property (readonly) unsigned long long maxNumberOfInteractionsStored;
@property (readonly) unsigned long long maxNumberOfInteractionsDeleted;
@property (readonly) NSDate *dateOfOldestAllowedInteraction;

+ (id)modifyDate:(id)a0 usingPolicy:(id)a1;
+ (id)limitArray:(id)a0 toMaxCount:(unsigned long long)a1;
+ (id)interactionPolicies;

- (void)setupDefaultHardcodedPolicies;
- (id)description;
- (id)filterAndModifyInteractionsWithPolicies:(id)a0 enforceDataLimits:(BOOL)a1 enforcePrivacy:(BOOL)a2;
- (id)whitelistedFirstPartyBundleIds;
- (void).cxx_destruct;
- (id)init;
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)a0;
- (id)policyForMechanism:(long long)a0;
- (id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
- (void)readConfigurationPlist;

@end
