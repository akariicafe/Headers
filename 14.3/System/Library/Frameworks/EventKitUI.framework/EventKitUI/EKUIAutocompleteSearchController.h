@interface EKUIAutocompleteSearchController : NSObject

@property unsigned long long maximumResultCount;

+ (id)searchWithEventStore:(id)a0 searchString:(id)a1 maximumResultCount:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
