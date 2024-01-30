@class RBProcessMap, RBProcessIndex, NSMapTable, RBAssertionCollection;
@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;

@interface RBAssertionStateResolver : NSObject

@property (retain, nonatomic) RBAssertionCollection *assertionCollection;
@property (retain, nonatomic) RBProcessIndex *processIndex;
@property (retain, nonatomic) RBProcessMap *stateMap;
@property (retain, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager;
@property (retain, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id<RBEntitlementManaging> entitlementManager;
@property (retain, nonatomic) NSMapTable *savedEndowments;

- (id)assertionDescriptorsWithFlattenedAttributes:(BOOL)a0;
- (void).cxx_destruct;
- (id)resolveForAssertions:(id)a0;

@end
