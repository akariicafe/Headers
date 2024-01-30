@class NSString, RWIProtocolJSONObject, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *className;
@property (retain, nonatomic) RWIProtocolJSONObject *value;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (copy, nonatomic) NSString *objectId;
@property (nonatomic) int size;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *classPrototype;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *preview;

- (id)initWithType:(long long)a0;

@end
