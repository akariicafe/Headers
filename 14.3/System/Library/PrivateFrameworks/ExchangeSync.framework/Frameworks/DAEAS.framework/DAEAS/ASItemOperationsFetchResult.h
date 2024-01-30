@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem

@property (retain, nonatomic) NSString *classString;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSearchResult;

@end
