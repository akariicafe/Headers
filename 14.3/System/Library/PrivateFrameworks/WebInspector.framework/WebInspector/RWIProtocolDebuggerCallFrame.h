@class RWIProtocolRuntimeRemoteObject, NSString, NSArray, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *callFrameId;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSArray *scopeChain;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *thisObject;
@property (nonatomic) BOOL isTailDeleted;

- (id)initWithCallFrameId:(id)a0 functionName:(id)a1 location:(id)a2 scopeChain:(id)a3 thisObject:(id)a4 isTailDeleted:(BOOL)a5;

@end
