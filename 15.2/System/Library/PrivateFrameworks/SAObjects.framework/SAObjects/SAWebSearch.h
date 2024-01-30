@class NSString;

@interface SAWebSearch : SADomainCommand

@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *query;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
