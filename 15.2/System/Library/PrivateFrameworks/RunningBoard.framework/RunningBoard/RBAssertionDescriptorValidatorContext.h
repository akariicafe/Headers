@class RBSAssertionDescriptor, RBSProcessIdentity, RBProcessState, NSString, NSDictionary, RBProcess, RBSProcessIdentifier, RBAssertionDescriptorValidator, RBAssertionAcquisitionContext;
@protocol RBConcreteTargeting, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementPossessing, RBBundleProperties, RBEntitlementManaging;

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying, RBAssertionContextProviding> {
    unsigned long long _ignoreRestrictions;
}

@property (retain, nonatomic) RBAssertionDescriptorValidator *assertionDescriptionValidator;
@property (retain, nonatomic) RBSAssertionDescriptor *assertionDescriptor;
@property (retain, nonatomic) RBProcess *originatorProcess;
@property (retain, nonatomic) RBProcessState *originatorState;
@property (retain, nonatomic) id<RBConcreteTargeting> target;
@property (retain, nonatomic) RBSProcessIdentity *targetIdentity;
@property (retain, nonatomic) RBSProcessIdentifier *targetIdentifier;
@property (retain, nonatomic) RBProcessState *targetState;
@property (retain, nonatomic) RBAssertionAcquisitionContext *acquisitionContext;
@property (retain, nonatomic) id<RBEntitlementManaging> entitlementManager;
@property (retain, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager;
@property (readonly, nonatomic) RBSProcessIdentity *originatorIdentity;
@property (retain, nonatomic) id<RBEntitlementPossessing> originatorEntitlements;
@property (retain, nonatomic) id<RBEntitlementPossessing> targetEntitlements;
@property (retain, nonatomic) NSDictionary *savedEndowments;
@property (readonly, nonatomic) BOOL ignoreRestrictions;
@property (readonly, nonatomic) BOOL targetIsSystem;
@property (readonly, nonatomic) RBProcess *targetProcess;
@property (readonly, nonatomic) id<RBBundleProperties> targetProperties;
@property (readonly, nonatomic) id<RBBundleProperties> originatorProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)context;

- (void)popIgnoreRestrictions;
- (void)setTargetProperties:(id)a0;
- (void)setTargetProcess:(id)a0;
- (void).cxx_destruct;
- (void)pushIgnoreRestrictions;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
