@class NSArray, NSString, RWIProtocolCSSSourceRange, RWIProtocolCSSStyleId;

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *cssProperties;
@property (copy, nonatomic) NSArray *shorthandEntries;
@property (retain, nonatomic) RWIProtocolCSSStyleId *styleId;
@property (copy, nonatomic) NSString *cssText;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;
@property (copy, nonatomic) NSString *width;
@property (copy, nonatomic) NSString *height;

- (id)initWithCssProperties:(id)a0 shorthandEntries:(id)a1;

@end
