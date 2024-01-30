@class NSString;

@interface SAWebSiteSearch : SADomainCommand

@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *query;

+ (id)siteSearch;
+ (id)siteSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
