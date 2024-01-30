@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelAssetBaseReference : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDataURL;
@property (copy, nonatomic) NSString *payloadContentType;
@property (copy, nonatomic) NSNumber *payloadSize;
@property (copy, nonatomic) NSString *payloadHashSHA256;
@property (copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers;

+ (id)buildWithDataURL:(id)a0 contentType:(id)a1 size:(id)a2 hashSHA256:(id)a3 certificatePinningIdentifiers:(id)a4;
+ (id)buildRequiredOnlyWithDataURL:(id)a0 contentType:(id)a1 size:(id)a2 hashSHA256:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
