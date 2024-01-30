@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (copy, nonatomic) NSArray *entities;
@property (nonatomic) long long numResults;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchTitle;

+ (id)fileSearchView;
+ (id)fileSearchViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
