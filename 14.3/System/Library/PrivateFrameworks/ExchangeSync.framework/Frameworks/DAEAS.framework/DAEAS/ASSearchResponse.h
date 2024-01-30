@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem

@property (retain, nonatomic) NSArray *stores;
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

@end
