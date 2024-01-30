@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
    NSMutableDictionary *_items;
    NSDictionary *_subclassRuleSet;
    NSMutableDictionary *_placeHolder;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;

- (id)description;
- (void).cxx_destruct;
- (void)_setItems:(id)a0;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)a0 forDCCPT:(int)a1;
- (id)initWithSubclassRuleSet:(id)a0;
- (id)commonValue;
- (id)asParseRules;

@end
