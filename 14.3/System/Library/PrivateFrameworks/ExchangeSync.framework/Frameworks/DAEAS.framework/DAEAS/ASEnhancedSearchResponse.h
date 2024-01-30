@class NSArray, NSMutableArray, NSNumber;

@interface ASEnhancedSearchResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mResults;
@property (readonly, nonatomic) NSArray *stores;
@property (copy, nonatomic) NSNumber *status;
@property (nonatomic) int expectedResultType;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)description;
- (void)addStoreResponse:(id)a0;

@end
