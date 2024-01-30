@class NSString, NSArray;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *text;

- (id)initWithStyleSheetId:(id)a0 rules:(id)a1;

@end
