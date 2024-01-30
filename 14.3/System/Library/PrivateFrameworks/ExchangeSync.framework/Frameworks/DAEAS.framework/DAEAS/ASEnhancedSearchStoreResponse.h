@class NSArray, NSString, NSMutableArray, NSNumber;

@interface ASEnhancedSearchStoreResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mResults;
@property (readonly, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *store;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSString *range;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)description;
- (void)addResult:(id)a0;

@end
