@class RBSAssertionDescriptor, RBSProcessIdentity, RBProcessState, RBProcess, RBSProcessIdentifier, RBAssertionDescriptorValidator, RBAssertionAcquisitionContext, RBConcreteTarget;
@protocol RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementPossessing, RBBundleProperties, RBEntitlementManaging;

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying> {
    id<RBBundleProperties> _targetProperties;
    id<RBEntitlementPossessing> _originatorEntitlements;
    id<RBEntitlementPossessing> _targetEntitlements;
    unsigned long long _ignoreRestrictions;
}

@property (retain, nonatomic) RBAssertionDescriptorValidator *assertionDescriptionValidator;
@property (retain, nonatomic) RBSAssertionDescriptor *assertionDescriptor;
@property (retain, nonatomic) RBProcess *originatorProcess;
@property (retain, nonatomic) RBProcessState *originatorState;
@property (retain, nonatomic) RBConcreteTarget *target;
@property (retain, nonatomic) RBProcess *targetProcess;
@property (retain, nonatomic) RBSProcessIdentity *targetIdentity;
@property (retain, nonatomic) RBSProcessIdentifier *targetIdentifier;
@property (retain, nonatomic) RBProcessState *targetState;
@property (retain, nonatomic) RBAssertionAcquisitionContext *acquisitionContext;
@property (retain, nonatomic) id<RBEntitlementManaging> entitlementManager;
@property (retain, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager;
@property (readonly, nonatomic) RBSProcessIdentity *originatorIdentity;
@property (readonly, nonatomic) id<RBEntitlementPossessing> originatorEntitlements;
@property (readonly, nonatomic) id<RBEntitlementPossessing> targetEntitlements;
@property (readonly, nonatomic) id<RBBundleProperties> targetProperties;
@property (readonly, nonatomic) BOOL ignoreRestrictions;
@property (readonly, nonatomic) BOOL targetIsSystem;

+ (id)context;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)popIgnoreRestrictions;
- (void)pushIgnoreRestrictions;

@end
