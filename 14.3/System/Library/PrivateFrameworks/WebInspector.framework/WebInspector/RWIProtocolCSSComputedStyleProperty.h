@class NSString;

@interface RWIProtocolCSSComputedStyleProperty : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;

- (id)initWithName:(id)a0 value:(id)a1;

@end
