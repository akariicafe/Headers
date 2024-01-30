@class NSArray, NSMutableArray;

@interface ASMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSMutableArray *mClasses;
@property (readonly, nonatomic) NSArray *classes;

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
- (void)addClass:(id)a0;

@end
