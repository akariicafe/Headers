@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSString *className;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isSearchResult;

@end
