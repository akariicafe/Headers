@class NSString, NSArray;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (copy, nonatomic) NSString *contentShelfViewId;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (nonatomic) long long pageNumber;
@property (copy, nonatomic) NSArray *results;

+ (id)addResultsToContentShelfWithDictionary:(id)a0 context:(id)a1;
+ (id)addResultsToContentShelf;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
