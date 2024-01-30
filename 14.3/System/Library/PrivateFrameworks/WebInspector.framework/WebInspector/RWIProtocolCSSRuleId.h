@class NSString;

@interface RWIProtocolCSSRuleId : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *styleSheetId;
@property (nonatomic) int ordinal;

- (id)initWithStyleSheetId:(id)a0 ordinal:(int)a1;

@end
