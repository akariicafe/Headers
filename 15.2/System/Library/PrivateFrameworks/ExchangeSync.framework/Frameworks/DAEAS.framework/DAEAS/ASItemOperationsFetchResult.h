@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem

@property (retain, nonatomic) NSString *classString;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_isSearchResult;

@end
