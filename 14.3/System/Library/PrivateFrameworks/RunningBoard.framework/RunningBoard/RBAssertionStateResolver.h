@class RBProcessMap, RBProcessIndex, RBAssertionCollection;
@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;

@interface RBAssertionStateResolver : NSObject

@property (retain, nonatomic) RBAssertionCollection *assertionCollection;
@property (retain, nonatomic) RBProcessIndex *processIndex;
@property (retain, nonatomic) RBProcessMap *stateMap;
@property (retain, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager;
@property (retain, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id<RBEntitlementManaging> entitlementManager;

- (id)resolveForAssertions:(id)a0;
- (void).cxx_destruct;
- (id)assertionDescriptorsWithFlattenedAttributes:(BOOL)a0;

@end
