@class NSSet, NSString;

@interface RMModelAppDeclaration_Installation : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadMethod;
@property (copy, nonatomic) NSString *payloadVPPOnDemandLicenseAssetReference;

+ (id)buildWithMethod:(id)a0 vppOnDemandLicenseAssetReference:(id)a1;
+ (id)buildRequiredOnlyWithMethod:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
