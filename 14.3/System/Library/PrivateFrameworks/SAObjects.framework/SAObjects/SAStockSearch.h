@class NSArray;

@interface SAStockSearch : SADomainCommand

@property (copy, nonatomic) NSArray *stockReferences;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
