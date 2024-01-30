@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *shelves;
@property (copy, nonatomic) NSString *title;

+ (id)vendResultsToSearch;
+ (id)vendResultsToSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
