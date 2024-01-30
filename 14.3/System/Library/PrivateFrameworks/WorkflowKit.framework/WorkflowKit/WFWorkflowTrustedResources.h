@class RLMLinkingObjects, RLMArray;
@protocol WFRealmAccessResourcePermissionState, WFTrustedJavaScriptDomain;

@interface WFWorkflowTrustedResources : RLMObject <NSCopying>

@property (retain) RLMArray<WFTrustedJavaScriptDomain> *trustedDomains;
@property (retain) RLMArray<WFRealmAccessResourcePermissionState> *accessResourcePermissionStates;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)requiredProperties;
+ (id)linkingObjectsProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
