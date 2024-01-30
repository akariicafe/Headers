@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults

@property (copy, nonatomic) NSArray *results;

+ (id)searchResultsWithDictionary:(id)a0 context:(id)a1;
+ (id)searchResults;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
