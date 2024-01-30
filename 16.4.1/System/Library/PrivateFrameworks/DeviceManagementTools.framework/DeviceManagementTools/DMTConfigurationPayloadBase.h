@class NSDictionary;

@interface DMTConfigurationPayloadBase : DMTConfigurationPrimitive

@property (class, readonly, nonatomic) NSDictionary *payloadSubclassesByPayloadType;

+ (id)concretePayloadWithDictionary:(id)a0 error:(id *)a1;

@end
