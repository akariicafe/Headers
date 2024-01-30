@class RWIProtocolCSSSelectorList, NSString, NSArray, RWIProtocolCSSStyle, RWIProtocolCSSRuleId;

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolCSSSelectorList *selectorList;
@property (nonatomic) int sourceLine;
@property (nonatomic) long long origin;
@property (retain, nonatomic) RWIProtocolCSSStyle *style;
@property (retain, nonatomic) RWIProtocolCSSRuleId *ruleId;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSArray *groupings;

- (id)initWithSelectorList:(id)a0 sourceLine:(int)a1 origin:(long long)a2 style:(id)a3;

@end
