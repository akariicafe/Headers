@class RWIProtocolRuntimeRemoteObject, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *object;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (nonatomic) BOOL empty;

- (id)initWithObject:(id)a0 type:(long long)a1;

@end
