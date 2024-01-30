@class RWIProtocolJSONObject, NSString;

@interface RWIProtocolRuntimeCallArgument : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolJSONObject *value;
@property (copy, nonatomic) NSString *objectId;

@end
