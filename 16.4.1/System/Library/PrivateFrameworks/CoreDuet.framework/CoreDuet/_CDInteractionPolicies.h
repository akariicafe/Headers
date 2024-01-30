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

+ (id)interactionPolicies;
+ (id)limitArray:(id)a0 toMaxCount:(unsigned long long)a1;
+ (id)modifyDate:(id)a0 usingPolicy:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)a0;
- (id)filterAndModifyInteractionsWithPolicies:(id)a0 enforceDataLimits:(BOOL)a1 enforcePrivacy:(BOOL)a2;
- (id)policyForMechanism:(long long)a0;
- (void)readConfigurationPlist;
- (void)setupDefaultHardcodedPolicies;
- (id)whitelistedFirstPartyBundleIds;

@end
