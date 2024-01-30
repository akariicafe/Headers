@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults

@property (copy, nonatomic) NSArray *results;

+ (id)searchResults;
+ (id)searchResultsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
