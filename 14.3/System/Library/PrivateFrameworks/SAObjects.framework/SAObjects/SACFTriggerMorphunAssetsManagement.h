@class NSString;

@interface SACFTriggerMorphunAssetsManagement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;

+ (id)triggerMorphunAssetsManagement;
+ (id)triggerMorphunAssetsManagementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
