@class NSString, RMProtocolServerCapabilities;

@interface RMProtocolServerCapabilitiesResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseCapabilitiesToken;
@property (copy, nonatomic) RMProtocolServerCapabilities *responseCapabilities;

+ (id)requestWithCapabilitiesToken:(id)a0 capabilities:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
