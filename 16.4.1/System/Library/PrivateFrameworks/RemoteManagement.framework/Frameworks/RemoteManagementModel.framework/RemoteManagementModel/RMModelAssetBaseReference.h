@class NSSet, NSString, NSNumber;

@interface RMModelAssetBaseReference : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDataURL;
@property (copy, nonatomic) NSString *payloadContentType;
@property (copy, nonatomic) NSNumber *payloadSize;
@property (copy, nonatomic) NSString *payloadHashSHA256;

+ (id)buildRequiredOnlyWithDataURL:(id)a0 contentType:(id)a1 size:(id)a2 hashSHA256:(id)a3;
+ (id)buildWithDataURL:(id)a0 contentType:(id)a1 size:(id)a2 hashSHA256:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
