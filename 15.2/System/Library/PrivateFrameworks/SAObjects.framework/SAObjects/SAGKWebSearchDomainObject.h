@class NSArray, NSString;

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *query;

+ (id)webSearchDomainObject;
+ (id)webSearchDomainObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
