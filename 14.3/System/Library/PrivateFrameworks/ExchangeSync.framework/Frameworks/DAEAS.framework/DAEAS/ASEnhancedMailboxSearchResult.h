@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSString *className;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isSearchResult;

@end
