@class NSArray, NSMutableArray;

@interface ASMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSMutableArray *mClasses;
@property (readonly, nonatomic) NSArray *classes;

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
- (void)addClass:(id)a0;

@end
