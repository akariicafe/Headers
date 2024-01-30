@class NSString, RMProtocolOrganizationDetails;

@interface RMProtocolOrganizationDetailsResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseOrganizationDetailsToken;
@property (copy, nonatomic) RMProtocolOrganizationDetails *responseOrganizationDetails;

+ (id)requestWithOrganizationDetailsToken:(id)a0 organizationDetails:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
