@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *matchedCSSRules;
@property (retain, nonatomic) RWIProtocolCSSStyle *inlineStyle;

- (id)initWithMatchedCSSRules:(id)a0;

@end
