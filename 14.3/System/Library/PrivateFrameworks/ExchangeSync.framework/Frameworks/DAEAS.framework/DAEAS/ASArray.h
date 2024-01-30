@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSubclassRuleSet:(id)a0;
- (id)commonValue;
- (id)asParseRules;

@end
