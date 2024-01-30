@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolCSSStyle *style;

- (id)initWithName:(id)a0 style:(id)a1;

@end
