@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) SAWebWebSearchResult *results;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
