@class NSSet, NSString;

@interface RMModelSecretCredentialsDeclaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadSecret;

+ (id)buildWithSecret:(id)a0;
+ (id)buildRequiredOnlyWithSecret:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
