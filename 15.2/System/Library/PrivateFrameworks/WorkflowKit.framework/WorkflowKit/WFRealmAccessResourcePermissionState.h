@class NSString, NSData, RLMLinkingObjects;

@interface WFRealmAccessResourcePermissionState : RLMObject

@property (copy) NSString *identifier;
@property (copy) NSData *data;
@property (readonly) RLMLinkingObjects *trustedResources;

+ (id)requiredProperties;
+ (id)linkingObjectsProperties;

- (void).cxx_destruct;

@end
