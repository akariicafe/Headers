@class SAGKDirectAnswer, NSArray;

@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (retain, nonatomic) SAGKDirectAnswer *directAnswer;
@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSArray *structuredAnswers;

+ (id)openEndedDomainObject;
+ (id)openEndedDomainObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
