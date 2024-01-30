@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) BOOL writable;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *get;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *set;
@property (nonatomic) BOOL wasThrown;
@property (nonatomic) BOOL configurable;
@property (nonatomic) BOOL enumerable;
@property (nonatomic) BOOL isOwn;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *symbol;
@property (nonatomic) BOOL nativeGetter;

- (id)initWithName:(id)a0;

@end
