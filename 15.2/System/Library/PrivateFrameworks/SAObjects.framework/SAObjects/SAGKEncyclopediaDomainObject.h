@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nameAnnotation;
@property (copy, nonatomic) NSArray *structuredAnswers;

+ (id)encyclopediaDomainObject;
+ (id)encyclopediaDomainObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
