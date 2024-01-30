@class SAAnswerDirectAnswer, NSString, NSArray, SAUIAppPunchOut;

@interface SAAnswerDomainObject : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) SAAnswerDirectAnswer *directAnswer;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSArray *structuredAnswers;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
