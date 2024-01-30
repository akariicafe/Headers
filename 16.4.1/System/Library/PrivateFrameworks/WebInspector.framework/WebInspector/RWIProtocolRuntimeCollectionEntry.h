@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *key;

- (id)initWithValue:(id)a0;

@end
