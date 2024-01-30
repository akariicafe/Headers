@class NSArray, NSString, NSMutableArray, NSNumber;

@interface ASSearchStore : ASItem

@property (retain, nonatomic) NSMutableArray *mResults;
@property (readonly, nonatomic) NSArray *results;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSString *range;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;

- (id)description;
- (void).cxx_destruct;
- (void)addResult:(id)a0;
- (id)asParseRules;

@end
