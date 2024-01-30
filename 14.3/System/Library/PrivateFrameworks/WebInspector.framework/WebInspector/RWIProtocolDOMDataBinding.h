@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *binding;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *type;

- (id)initWithBinding:(id)a0 value:(id)a1;

@end
