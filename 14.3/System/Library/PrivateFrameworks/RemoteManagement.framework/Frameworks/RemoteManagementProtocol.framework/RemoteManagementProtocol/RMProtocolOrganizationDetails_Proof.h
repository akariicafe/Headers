@class NSSet, NSString;

@interface RMProtocolOrganizationDetails_Proof : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedDetailsKeys;

@property (copy, nonatomic) NSString *detailsIdentityToken;

+ (id)buildRequiredOnly;
+ (id)buildWithIdentityToken:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
