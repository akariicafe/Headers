@class NSSet, NSData;

@interface RMModelCertificateIdentityCredentialsDeclaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSData *payloadCertificate;

+ (id)buildWithCertificate:(id)a0;
+ (id)buildRequiredOnlyWithCertificate:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
