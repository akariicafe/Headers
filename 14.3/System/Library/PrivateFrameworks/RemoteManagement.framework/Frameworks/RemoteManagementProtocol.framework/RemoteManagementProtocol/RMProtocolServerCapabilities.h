@class NSString, RMProtocolSupportedFeatures;

@interface RMProtocolServerCapabilities : RMModelPayloadBase

@property (copy, nonatomic) NSString *capabilitiesVersion;
@property (copy, nonatomic) RMProtocolSupportedFeatures *capabilitiesSupportedFeatures;

+ (id)requestWithVersion:(id)a0 supportedFeatures:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
