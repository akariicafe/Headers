@class NSArray;

@interface RMProtocolWellKnownResponse : RMModelPayloadBase

@property (copy, nonatomic) NSArray *responseServers;

+ (id)requestWithServers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
