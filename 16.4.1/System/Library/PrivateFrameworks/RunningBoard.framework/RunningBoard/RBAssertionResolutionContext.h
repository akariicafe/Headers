@class NSMapTable, RBProcessMap, RBSystemState, NSMutableSet, RBAttributeContext, RBProcessIndex, RBProcessStateChangeSet, RBAssertionCollection;
@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;

@interface RBAssertionResolutionContext : NSObject {
    NSMutableSet *_assertions;
    NSMutableSet *_targetsPendingResolution;
    RBProcessMap *_resolvedState;
    RBProcessMap *_originatorInheritances;
    RBAttributeContext *_attributeContext;
    RBAssertionCollection *_assertionCollection;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    id<RBDomainAttributeManaging> _domainAttributeManager;
    id<RBBundlePropertiesManaging> _bundlePropertiesManager;
    id<RBEntitlementManaging> _entitlementManager;
    NSMapTable *_savedEndowments;
    RBSystemState *_systemState;
}

@property (readonly, nonatomic) RBProcessStateChangeSet *changeSet;
@property (readonly, nonatomic) RBSystemState *systemState;
@property (readonly, nonatomic) NSMutableSet *touchedAssertions;
@property (readonly, nonatomic) NSMutableSet *lostStartTimeDefining;
@property (readonly, nonatomic) NSMutableSet *gainedStartTimeDefining;

- (void)_resolveSystemState;
- (id)_inheritancesForOriginator:(id)a0;
- (void)_assertionGraphFromAssertion:(id)a0 graph:(id)a1;
- (id)_originatorInheritancesForAssertion:(id)a0;
- (void)_checkForSuspendableAssertionCycle:(id)a0 newState:(id)a1;
- (id)_latestStateForIdentity:(id)a0;
- (id)_assertionGraphFromAssertion:(id)a0;
- (void)_suspendOrResumeAssertionsForTarget:(id)a0 oldState:(id)a1 newState:(id)a2;
- (void)_updateStatesForAssertion:(id)a0;
- (void)_suspendAssertionsForTarget:(id)a0;
- (void)_finalizeStateChangeSet;
- (void)_resolveProcessStateForTarget:(id)a0 ofType:(unsigned long long)a1 viaAssertion:(id)a2;
- (void).cxx_destruct;

@end
