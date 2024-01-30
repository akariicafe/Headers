@class NSString;

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *sourceURL;

- (id)initWithText:(id)a0 type:(long long)a1;

@end
