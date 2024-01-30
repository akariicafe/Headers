@class NSArray;

@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject

@property (copy, nonatomic) NSArray *supportedFeatures;

+ (id)checkForGuideUpdateContext;
+ (id)checkForGuideUpdateContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
