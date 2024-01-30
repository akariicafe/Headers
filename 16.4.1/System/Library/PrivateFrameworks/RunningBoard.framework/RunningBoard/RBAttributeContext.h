@class RBProcessState, RBSAssertionIdentifier, RBSProcessIdentity, RBAssertion, NSString, NSDictionary, RBSystemState, RBProcess, RBInheritanceCollection;
@protocol RBConcreteTargeting, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementPossessing, RBBundleProperties, RBEntitlementManaging;

@interface RBAttributeContext : NSObject <RBAssertionContextProviding> {
    unsigned long long _activeDueToInheritedEndowmentCount;
}

@property (retain, nonatomic) RBAssertion *assertion;
@property (readonly, nonatomic) RBSAssertionIdentifier *assertionID;
@property (readonly, nonatomic) id<RBConcreteTargeting> target;
@property (readonly, nonatomic) BOOL targetIsSystem;
@property (readonly, nonatomic) RBSProcessIdentity *targetIdentity;
@property (retain, nonatomic) RBProcessState *initialProcessState;
@property (retain, nonatomic) RBInheritanceCollection *availableInheritances;
@property (retain, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager;
@property (retain, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id<RBEntitlementManaging> entitlementManager;
@property (readonly, nonatomic) BOOL isActiveDueToInheritedEndowment;
@property (retain, nonatomic) NSDictionary *savedEndowments;
@property (readonly, nonatomic) RBProcess *originatorProcess;
@property (readonly, nonatomic) RBProcess *targetProcess;
@property (readonly, nonatomic) RBSystemState *systemState;
@property (readonly, nonatomic) id<RBBundleProperties> targetProperties;
@property (readonly, nonatomic) id<RBBundleProperties> originatorProperties;
@property (readonly, nonatomic) id<RBEntitlementPossessing> originatorEntitlements;
@property (readonly, nonatomic) id<RBEntitlementPossessing> targetEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
