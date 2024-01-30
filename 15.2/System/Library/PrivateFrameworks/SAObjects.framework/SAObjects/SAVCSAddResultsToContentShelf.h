@class NSString, NSArray;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (copy, nonatomic) NSString *contentShelfViewId;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (nonatomic) long long pageNumber;
@property (copy, nonatomic) NSArray *results;

+ (id)addResultsToContentShelf;
+ (id)addResultsToContentShelfWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
