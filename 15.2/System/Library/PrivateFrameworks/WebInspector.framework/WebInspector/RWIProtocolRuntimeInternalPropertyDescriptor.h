@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeInternalPropertyDescriptor : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;

- (id)initWithName:(id)a0;

@end
