@class RBSAssertionIdentifier, RBProcessState, RBSProcessIdentity, RBInheritanceCollection, RBProcess, RBConcreteTarget, RBAssertion;
@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;

@interface RBAttributeContext : NSObject {
    unsigned long long _activeDueToInheritedEndowmentCount;
}

@property (retain, nonatomic) RBAssertion *assertion;
@property (readonly, nonatomic) RBSAssertionIdentifier *assertionID;
@property (readonly, nonatomic) RBConcreteTarget *target;
@property (readonly, nonatomic) BOOL targetIsSystem;
@property (readonly, nonatomic) RBProcess *targetProcess;
@property (readonly, nonatomic) RBSProcessIdentity *targetIdentity;
@property (retain, nonatomic) RBProcessState *initialProcessState;
@property (retain, nonatomic) RBInheritanceCollection *availableInheritances;
@property (retain, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager;
@property (retain, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id<RBEntitlementManaging> entitlementManager;
@property (readonly, nonatomic) BOOL isActiveDueToInheritedEndowment;

- (void).cxx_destruct;
- (void)popActiveDueToInheritedEndowment;
- (void)pushActiveDueToInheritedEndowment;

@end
