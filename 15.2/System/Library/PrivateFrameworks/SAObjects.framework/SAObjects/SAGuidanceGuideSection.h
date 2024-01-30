@class NSArray, NSString;

@interface SAGuidanceGuideSection : SADomainObject

@property (copy, nonatomic) NSArray *guideUtterances;
@property (copy, nonatomic) NSString *sectionName;

+ (id)guideSection;
+ (id)guideSectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
