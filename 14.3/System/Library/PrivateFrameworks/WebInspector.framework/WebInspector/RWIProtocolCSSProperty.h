@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *priority;
@property (nonatomic) BOOL implicit;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL parsedOk;
@property (nonatomic) long long status;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;

- (id)initWithName:(id)a0 value:(id)a1;

@end
