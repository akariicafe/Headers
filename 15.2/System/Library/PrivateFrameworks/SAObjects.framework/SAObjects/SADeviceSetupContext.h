@class NSString;

@interface SADeviceSetupContext : SADomainObject

@property (copy, nonatomic) NSString *setupSceneId;

+ (id)setupContext;
+ (id)setupContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
