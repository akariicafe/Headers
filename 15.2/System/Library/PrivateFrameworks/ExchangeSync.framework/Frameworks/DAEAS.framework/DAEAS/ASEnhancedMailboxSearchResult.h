@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSString *className;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isSearchResult;

@end
