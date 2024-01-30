@interface AMSMediaTokenServiceDeserializer : NSObject

+ (id)_correctPayload:(id)a0;
+ (id)mediaTokenFromDictionary:(id)a0 error:(id *)a1;
+ (id)_deserializeMediaTokenDictionary:(id)a0;

@end
